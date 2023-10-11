#include<iostream>
using namespace std;

bool func1(long long int arr[],int num,int n){
    //base case
    if(num==n-1){
        return true;
    }
    //recursive case
    if(arr[num]<=arr[num+1]){
        return func1(arr,num+1,n);
    }else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    long long int arr[n];
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