#include<bits/stdc++.h>
using namespace std;

//Simple Recursion - 
int minMoney(int arr[],int index,int w){
    //Base Case - 
    if(index<0 ||w==0){
        return ;
    }

    //Recursive Case - 
    int take=INT_MAX;
    int notTake=INT_MAX;
    if(w>=arr[index]){
       take=arr[index]+minMoney(arr,index-1,w-arr[index]); 
    }
    notTake=minMoney(arr,index-1,w);
    return min(take,notTake);
}

int main(){
    int n,w;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minMoney(arr,n-1,w)<<endl;  
    return 0;
}