#include<bits/stdc++.h>
using namespace std;

// 8 3
// 12 -1 -7 8 -15 30 16 28

void firstNegativeWindow(int arr[],int k,int n){
    int i=0;
    while((i+k)<=n){
        bool isNegativePresent=false;
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                cout<<arr[j]<<" ";
                isNegativePresent=true;
                break;
            }
        }
        if(isNegativePresent==false){
            cout<<0<<" ";
        }
        i++;
    }
    cout<<endl;
    return;
}

int main(){
    int t,n,k;
    cin>>t;
    while(t>0){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        firstNegativeWindow(arr,k,n);
        t--;
    }
    return 0;
}