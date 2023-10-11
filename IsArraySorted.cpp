// Question - 
// Take as input N, the size of array. Take N more inputs and store that in an array. 
// Write a recursive function which returns true if the array is sorted and false otherwise. 
// Print the value returned.

#include<iostream>
using namespace std;

bool isSorted(int arr[],int i,int n){
    //Base Case - 
    if(i==n-1){
        return true;
    }

    //Recursive Case - 
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,i+1,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isSorted(arr,0,n)==true){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}