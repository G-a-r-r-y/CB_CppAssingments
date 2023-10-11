#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n!=0){
        long long int count=1;
        cout<<count<<" ";
        for(long long int i=1;i<n;i++){
            if(arr[i-1]<arr[i]){
                count++;
            }else{
                count=1;
            }
            cout<<count<<" ";
        }
        cout<<"END";
    }
    
    return 0;
}