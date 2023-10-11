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

    //Selection Sort Algo - 
    for(long long int i=0;i<n-1;i++){
        long long int minindex=i;
        for(long long int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }   
        }
        swap(arr[minindex],arr[i]);
    }

    //Printing array - 
    for(long long int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}