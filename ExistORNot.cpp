#include<bits/stdc++.h>
using namespace std;

void existOrNot(int arr[],int n){
    int q;
    cin>>q;
    while(q>0){
        int num;
        cin>>num;
        bool exist=false;
        for(int i=0;i<n;i++){
            if(arr[i]==num){
                exist=true;
            }
        }
        if(exist==true){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        q--;
    }
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        existOrNot(arr,n);
        t--;
    }
    return 0;
}