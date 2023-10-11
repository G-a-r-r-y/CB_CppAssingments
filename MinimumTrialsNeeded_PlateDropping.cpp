#include<bits/stdc++.h>
using namespace std;

int plateDropping(int p,int f,int** dp){
    //Base Case - 
    if(f==0||f==1){
        return dp[p][f]=f;
    }

    if(p==1){
        return dp[p][f]=f;
    }


    //Recursive Case - 
    if(dp[p][f]!=-1){
        return dp[p][f];
    }

    int ans=INT_MAX;
    for(int k=1;k<=f;k++){
        int tempAns=1+max(plateDropping(p-1,k-1,dp),plateDropping(p,f-k,dp));
        if(tempAns<ans){
            ans=tempAns;
        }
    }
    return dp[p][f]=ans;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int p,f;
        cin>>p>>f;
        int** dp=new int*[p+1];
        for(int i=0;i<p+1;i++){
            dp[i]=new int[f+1];
            for(int j=0;j<f+1;j++){
                dp[i][j]=-1;
            }
        }
        cout<<plateDropping(p,f,dp)<<endl;
    }
}