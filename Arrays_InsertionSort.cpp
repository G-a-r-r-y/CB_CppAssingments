#include<iostream>
using namespace std;

int main(){
    
    //Making an array - 
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Insertion Sort Algo -
    for(long long int i=1;i<n;i++){
        long long int ele=arr[i];
        long long int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>ele){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=ele;
    }

    //Printing array - 
    for(long long int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}