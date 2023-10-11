#include<iostream>
using namespace std;


void sumPairs(int arr[1000],int target,int n){
    int x,y,z;
    for(int i=0;i<n-1;i++){
        x=arr[i];
        for(int j=i+1;j<n;j++){
            y=arr[j];
             if(x+y==target){
                cout<<x<<" and "<<y<<endl;
            }
            
        }

    }
}

int main(){
    int n,target;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sorting the array - 
    for(int i=0;i<n-1;i++){
        bool run=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                run=true;
            }
        }
        if(run==false){
            break;
        }
    }

    cin>>target;

    sumPairs(arr,target,n);

    return 0;
}