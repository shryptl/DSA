#include<iostream>
using namespace std;

void mergesort(int arr[] , int l , int r){
    if(l<=r){
        mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

void merge(int arr , int l ,int mid ,int r){
    int i = l;
    int j = mid+1;
    int k = l;
    int temp[10];

    while(l<=mid && j<=r){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
             temp[k++] = arr[j++];
        }
    }

    while(i<=mid){
         temp[k++] = arr[i++];
    }

    while(j<=r){
         temp[k++] = arr[j++];
    }


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

    mergesort(arr,0,n-1);

    cout<<"After sorting"<<endl;
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }


    return 0;
}