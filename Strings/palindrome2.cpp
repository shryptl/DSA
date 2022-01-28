#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int flag=0;

    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            flag=0;
        }
        else{
            flag=1;
        }
    }

    if(flag==1){
        cout<<"string is palindrome";
    } 
    else{
        cout<<"string is not palindrome";
    }
}