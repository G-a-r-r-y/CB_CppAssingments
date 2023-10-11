#include<bits/stdc++.h>
using namespace std;

int dp[2001][2001][6];

// int LCS(int arr1[],int arr2[],int index1,int index2,int k,int*** dp){
//     //Base Case - 
//     if(index1<0 || index2<0){
//         return 0;
//     }

//     //Recursive Case - 
//     if(dp[index1][index2][k]!=-1){
//         return dp[index1][index2][k];
//     }

//     int ch1=INT_MIN;
//     if(arr1[index1]==arr2[index2]){
//         ch1=1+LCS(arr1,arr2,index1-1,index2-1,k,dp);
//     }

//     int ch2=INT_MIN;
//     if(k>0){
//         ch2=1+LCS(arr1,arr2,index1-1,index2-1,k-1,dp);
//     }

//     int ch3=max(LCS(arr1,arr2,index1,index2-1,k,dp),LCS(arr1,arr2,index1-1,index2,k,dp));

//     return dp[index1][index2][k]=max(ch1,max(ch2,ch3));
// }


int LCS(int arr1[],int arr2[],int index1,int index2,int k){
    //Base Case - 
    if(index1<0 || index2<0){
        return 0;
    }

    //Recursive Case - 
    if(dp[index1][index2][k]!=-1){
        return dp[index1][index2][k];
    }

    int ch1=INT_MIN;
    if(arr1[index1]==arr2[index2]){
        ch1=1+LCS(arr1,arr2,index1-1,index2-1,k);
    }

    int ch2=INT_MIN;
    if(k>0){
        ch2=1+LCS(arr1,arr2,index1-1,index2-1,k-1);
    }

    int ch3=max(LCS(arr1,arr2,index1,index2-1,k),LCS(arr1,arr2,index1-1,index2,k));

    return dp[index1][index2][k]=max(ch1,max(ch2,ch3));
}

int main(){
    int n1,n2,k;
    cin>>n1>>n2>>k;
    int arr1[n1];
    int arr2[n2];

    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    // int*** dp=new int**[n1];
    // for(int i=0;i<n1;i++){
    //     dp[i]=new int*[n2];
    //     for(int j=0;j<n2;j++){
    //         dp[i][j]=new int[k];
    //         for(int l=0;l<k;l++){
    //             dp[i][j][k]=-1;
    //         }
    //     }
    // }

    memset(dp,-1,sizeof(dp));
    cout<<LCS(arr1,arr2,n1-1,n2-1,k)<<endl;
    return 0;
}