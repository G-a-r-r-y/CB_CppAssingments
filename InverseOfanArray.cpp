#include<iostream>
using namespace std;

void inverse(int arr[],int newarr[],int i,int n){

    if(i==n){
        return;
    }

    int temp=arr[i];
    newarr[temp]=i;
    inverse(arr,newarr,i+1,n);
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    int newarr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    inverse(arr,newarr,0,n);
    
    for(int i=0;i<n;i++){
        cout<<newarr[i]<<" ";
    }
    
    return 0;
}