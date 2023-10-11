#include<bits/stdc++.h>
using namespace std;


//Simple Recursion - 
int Knapsack(int currentWeight,int weight[],int price[],int index){
    //Base Case - 
    if(index<0||currentWeight==0){
        return 0;
    }

    //Recursive Case - 
    if(weight[index]<=currentWeight){
        return max(price[index]+Knapsack(currentWeight-weight[index],weight,price,index-1),
                    Knapsack(currentWeight,weight,price,index-1));
    }
    return Knapsack(currentWeight,weight,price,index-1);
}


//Top Down - 
int KnapsackTD(int currentWeight,int weight[],int price[],int index,int** dp){
    //Base Case - 
    if(index<0||currentWeight==0){
        return 0;
    }

    //Recursive Case -
    if(dp[index][currentWeight]!=-1){
        return dp[index][currentWeight];
    }

    if(weight[index]<=currentWeight){
        return dp[index][currentWeight]=max(price[index]+KnapsackTD(currentWeight-weight[index],weight,price,index-1,dp),
                    KnapsackTD(currentWeight,weight,price,index-1,dp));
    }
    return dp[index][currentWeight]=KnapsackTD(currentWeight,weight,price,index-1,dp);
}

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
                dp[i][j]=max(price[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
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

    //Simple Recursion - 
    //cout<<Knapsack(maxPossibleWeight,weight,price,n-1)<<endl;

    //Top Down - 
    int** dp=new int*[n+1];
    for(int i=0;i<n+1;i++){
        dp[i]=new int[maxPossibleWeight+1];
        for(int j=0;j<maxPossibleWeight+1;j++){
            dp[i][j]=-1;
        }
    }
    //cout<<KnapsackTD(maxPossibleWeight,weight,price,n-1,dp)<<endl;

    //Bottom Up - 
    cout<<knapsackBU(weight,price,n,maxPossibleWeight)<<endl;
    return 0;
}