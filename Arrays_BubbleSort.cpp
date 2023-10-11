#include<iostream>
using namespace std;

void sort(long long int arr[],long long int n){
        
        for(long long int i=0;i<n-1;i++){
            bool flag=false;
            for(long long int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    flag=true;
                }
            }
            if (flag==false){
                break;
            }
        }
}

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }    
    sort(arr,n);
    for(long long int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}