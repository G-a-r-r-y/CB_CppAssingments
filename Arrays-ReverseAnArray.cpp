#include<iostream>
using namespace std;


void printReverse(long long int arr[100000],int n){

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    long long int arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printReverse(arr,n);
    return 0;
}