#include<bits/stdc++.h>
using namespace std;

vector<string>v;

bool isFound(string ans){
    for(auto x:v){
        if(x==ans){
            return true;
        }
    }
    return false;
}

void countSub(string str,string ans,int index){
    //Base Case - 
    if(index==str.length()){
        if(!isFound(ans)){
            v.push_back(ans);
        }
        return;
    }


    //Recursive Case - 
    //Take - 
    countSub(str,ans+str[index],index+1);

    //Not Take - 
    countSub(str,ans,index+1);
    
    return;
}

int countSubBU(string str,int index1,int index2){
    int dp[str.length()+1][str.length()+1];

    //initialising condition - 
    for(int i=0;i<str.length()+1;i++){
        for(int j=0;j<str.length()+1;j++){
            if(i==0 or j==0){
                dp[i][j]=1;
            }
        }
    }

    for(int i=1;i<str.length()+1;i++){
        for(int j=1;j<str.length()+1;j++){
            dp[i][j]=1+dp[i-1][j]+dp[i][j-1];
        }
    }

    return dp[str.length()][str.length()];
}
int main(){
    int t;
    cin>>t;
    string str;
    for(int i=0;i<t;i++){
        cin>>str;
        cout<<countSubBU(str,0,0)<<endl;
        str.clear();
    }
    return 0;
}