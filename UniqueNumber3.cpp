#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Selection Sorting -
    for(long long int i=0;i<n-1;i++){
        long long int minindex=i;
        for(long long int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }


    // long long int j=0;
    for(long long int j=0;j<n-2;j+=3){
        if(((arr[j]^arr[j+1])==0) and ((arr[j+1]^arr[j+2])==0)){
            j+=3;
            continue;
        }else{
            cout<<arr[j];
            return 0;
        }
    }

    cout<<arr[n-1];    
    return 0;
}