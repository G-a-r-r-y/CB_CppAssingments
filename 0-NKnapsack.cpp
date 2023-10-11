#include<bits/stdc++.h>
using namespace std;


//Bottom Up - 
int knapsackBU(int weight[],int price[],int n, int maxPossibleWeight){
    int dp[n+1][maxPossibleWeight+1];
    //Initialisation - 
    for(int i=0;i<n+1;i++){
        for(int j=0;j<maxPossibleWeight+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<maxPossibleWeight+1;j++){
            if(j>=weight[i-1]){
                dp[i][j]=max(price[i-1]+dp[i][j-weight[i-1]],dp[i-1][j]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    return dp[n][maxPossibleWeight];
}

int main(){
    int n,maxPossibleWeight;
    cin>>n>>maxPossibleWeight;
    int weight[n];
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    int price[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }

    //Bottom Up - 
    cout<<knapsackBU(weight,price,n,maxPossibleWeight)<<endl;
    return 0;
}