#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int>v1){
    int total=0;
    for(int i=0;i<v1.size();i++){
        total+=v1[i];
    }
    return total;
}

void subsets(int arr[],int i,int k,vector<int>v1,int n){

    //Base Condition - 
    if(i==n){
        if(sum(v1)==k){
            for(int i=v1.size()-1;i>=0;--i){
            cout<<v1[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    //Recursive Condition - 

    //Not Take - 
    subsets(arr,i+1,k,v1,n);

    //Take - 
    int ele=arr[i];
    v1.push_back(ele);
    subsets(arr,i+1,k,v1,n);

}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    vector<int>v1;
    subsets(arr,0,k,v1,n);
    return 0;
}