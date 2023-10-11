#include<iostream>
using namespace std;

void nextGreaterElement(long long int arr[],long long int n){
    for(long long int i=0;i<n-1;i++){
        bool kyaPrintHua=false;
        cout<<arr[i]<<',';
        for(long long int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                cout<<arr[j];
                kyaPrintHua=true;
                break;
            }
        }
        if(kyaPrintHua==false){
            cout<<-1;
        }
        cout<<endl;
    }
    cout<<arr[n-1]<<','<<-1<<endl;
}

int main(){
    int t;
    long long int n;
    cin>>t;
    while(t>0){
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        nextGreaterElement(arr,n);
        t--;
    }
    return 0;
}