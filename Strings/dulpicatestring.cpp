#include<iostream>
using namespace std;

int main()  
{  
    string s;
    cin>>s; 
    int count; 
    int n=s.length(); 
      
    cout<<"Duplicate characters in a given string:"<<endl;  

    for(int i=0; i<n; i++) {  
        count = 1;  
        for(int j = i+1; j<n; j++) {  
            if(s[i] == s[j] && s[i] != ' ') {  
                count++;  
                //Set s[j] to 0 to avoid printing visited character  
                s[j] = '0';  
            }  
        }  
        //A character is considered as duplicate if count is greater than 1  
        if(count > 1 && s[i] != '0')  
            cout<<s[i]<<endl;  
    }  
   
    return 0;  
} 