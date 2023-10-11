#include<iostream>
using namespace std;

void shiftLeft(long long int arr[],long long int n){
    int firstEle=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=firstEle;
}

void greaterElement(long long int arr[],long long int n){
    int j=n;
    while(j>0){
        bool kyaEleMila=false;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[0]){
                cout<<arr[i]<<" ";
                kyaEleMila=true;
                break;
            }
        }
        if(kyaEleMila==false){
            cout<<-1<<" ";
        }
        shiftLeft(arr,n);
        j--;
    }
}

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    greaterElement(arr,n);
    return 0;
}