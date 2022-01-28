#include<iostream>
using namespace std;

int linearsearch(int arr[] , int n , int key){

    for(int i=0 ; i<n ; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int key,n;
    cout<<"Enter no of arr"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter arrays"<<endl;
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<linearsearch(arr,n,key);
    return 0;
}