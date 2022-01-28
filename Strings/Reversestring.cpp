#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int reverse;

    for(int i=0;i<s.size()/2;i++){
        char a=s[i];
        s[i]=s[s.size()-1-i];
        s[s.size()-1-i]=a;
    }

    cout<<s;
}