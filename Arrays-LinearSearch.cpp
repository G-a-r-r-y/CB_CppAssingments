#include<iostream>
using namespace std;

int index(int arr[],int size,int num){
    for(int j=0;j<size;j++){
        if(num==arr[j]){
            return j;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int num1;
    cin>>num1;
    cout<<index(arr1,n,num1);
    return 0;
}