#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    int arr1[n];
    for(long long int i=0;i<n;i++){
        cin>>arr1[i];
    }

    long long int max=0;
    long long int start,end;
    for(long long int i=0;i<n;i++){

        //copying given array for each iteration
        long long arr[n];
        for(long long int f=0;f<n;f++){
            arr[f]=arr1[f];
        }

        //initialling count=0 for each iteration
        long long int count=0;

        //finding indices for the subsequence in this iteration jiske beech mei saare 0s ko 1s mei convert karna hai. 
        start=i;
        long long int j=i;
        while(arr[j]==0){
            j++;
        }
        end=j;
        
        //converting 0s to 1
        for(long long int k=start;k<=end;k++){
            arr[k]=1;
        }

        //counting number of 1s
        for(long long int g=0;g<n;g++){
            if(arr[g]==1){
                count++;
            }
        }
        if(count>max){
            max=count;
        }
    }
    cout<<max;
return 0;
}