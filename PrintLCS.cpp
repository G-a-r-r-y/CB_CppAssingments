#include<bits/stdc++.h>
using namespace std;

//Simple LCS using recursion - 
int LCS(string str1,string str2,int index1,int index2){
    //Base Case  - 
    if(index1==str1.length()||index2==str2.length()){
        return 0;
    }

    //Recursive Case  - 
    if(str1[index1]==str2[index2]){
        return 1+LCS(str1,str2,index1+1,index2+1);
    }
    return max(LCS(str1,str2,index1+1,index2),LCS(str1,str2,index1,index2+1));
}

//LCS using Bottom up and then finally printing it - 
void printLCS(string str1,string str2){
    int dp[str1.length()+1][str2.length()+1];
    //intialisation - 
    for(int i=0;i<str1.length()+1;i++){
        for(int j=0;j<str2.length()+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }

    //Main code of LCS matrix - 
    for(int i=1;i<str1.length()+1;i++){
        for(int j=1;j<str2.length()+1;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    //cout<<dp[str1.length()][str2.length()]<<endl;
    //Printing LCS - 
    vector<char>v;
    int i=str1.length();
    int j=str2.length();
    while(i>0 and j>0){
        if(str1[i-1]==str2[j-1]){
            v.push_back(str1[i-1]);
            i--;
            j--;
        }else if(dp[i][j-1]<dp[i-1][j]){
            i--;
        }else{
            j--;
        }
    }
    
    reverse(v.begin(),v.end());
    for(auto x: v){
        cout<<x;
    }
}
int main(){
    string str1,str2;
    cin>>str1>>str2;
    printLCS(str1,str2);
    return 0;
}