#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        bool kyaEkBaarBhiChala=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                kyaEkBaarBhiChala=true;
            }
        }
        if(kyaEkBaarBhiChala==false){
            break;
        }
    }

    cout<<arr[n-k];
    return 0;
}