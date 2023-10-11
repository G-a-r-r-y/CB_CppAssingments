#include<iostream>
using namespace std;

bool func1(int arr[],int start,int end){
    //base case
    if(start==end or end<start){
        return true;
    }
    //recursive case
    if(arr[start]==arr[end-1]){
        return func1(arr,start+1,end-1);
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(func1(arr,0,n)==1){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}