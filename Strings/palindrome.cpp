#include<iostream>
using namespace std;

int palindrome(string s){
    int n=s.size();

     for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            return 0;
        }
    }
    return 1;
}


int main(){
    string s;
    cin>>s;
    cout<<palindrome(s);
}