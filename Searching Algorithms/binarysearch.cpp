#include<iostream>
using namespace std;

int binarysearch(int arr[] , int n , int key){

    int l=0 , r=n;

    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    int key,n;
    cout<<"Enter no of arr"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter arrays";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<binarysearch(arr,n,key);
    return 0;
}