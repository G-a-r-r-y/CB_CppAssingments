#include<bits/stdc++.h>
using namespace std;

bool targetSum(int arr[],int i,int sum,vector<vector<int>>&dp){
    //Base Case - 
    if(sum==0){
        return true;
    }
    if(i==0){
        return arr[i]==sum; 
    }

    //Recursive Case -  
    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }   

    bool notTake=targetSum(arr,i-1,sum,dp);
    bool take=false;
    if(arr[i]<=sum){
        take=targetSum(arr,i-1,sum-arr[i],dp);
    }
    return dp[i][sum]=take||notTake;

}

int main(){
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int>>dp(n,vector<int>(sum+1,-1));
    // Means - We are making a 2D vector named dp where
    //         the outer vector stores vector of type int and its size is n in which each index is a vector 
    //         of type int where inner vector is of size sum+1 and has an initial data of -1.

    // Note - here dp is a 2D matrix storing boolean values in term of int(0,1) 
    //        these boolean values are stored with reference to which index we are at(i)
    //        and how much of the sum is left.

    if(targetSum(arr,n-1,sum,dp)==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}