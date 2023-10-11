#include<iostream>
using namespace std;

int main(){
    //Making a user defined list - 
    long long int n;
    cin>>n;
    int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long int maxZeroIndex=0;
    long long int maxcount=0;
    for(long long int i=0;i<n;i++){
        long long int count=0;
        long long int j=i;
        while(arr[j]==0){
            count++;
            j++;
        }

        if(maxcount<count){
            maxcount=count;
            maxZeroIndex=i;
        }
    }

    cout<<maxZeroIndex<<endl;
    long long int k=maxZeroIndex;
    long long int countbackward=0;
    long long int countforward=0;
    while(arr[k-1]==1){
        countbackward++;
        k--;
    }
    while(arr[k+1]==1){
        countforward++;
        k++;
    }

    cout<<countbackward<<endl<<countforward;
    return 0;
}