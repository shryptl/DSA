#include<iostream>
using namespace std;

int main(){
    int rows,coloums;
    cin>>rows>>coloums;

        for(int i=0;i<=rows;i++){
            for(int j=0;j<=coloums;j++){
                cout<<"*";
            }
            cout<<endl;
        }

    return 0;
}