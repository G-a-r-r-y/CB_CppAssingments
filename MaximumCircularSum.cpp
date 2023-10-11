#include<iostream>
#include<climits>
using namespace std;

int maxsum(int arr[1000],int n){
    int max=INT_MIN;
    int sum;
    for(int i=0;i<n;i++){
        int temp=arr[n-1];
        for(int j=n-2;j>=0;j--){
            arr[j+1]=arr[j];
        }
        arr[0]=temp;
        // for(int z=0;z<n;z++){
        //     cout<<arr[z]<<" ";
        // }
        
        sum=0;
        for(int l=0;l<n;l++){
            sum+=arr[l];
            //cout<<"    =   "<<sum<<endl;
            if(sum>max){
               max=sum;
            }
        }  
    }
    return max;
}

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[10000];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cout<<maxsum(arr,n)<<endl;
    }
    return 0;
}