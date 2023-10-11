#include<bits/stdc++.h>
using namespace std;

// Note - Remember that for and integer n, final string size would be 2*n where
//        n would be open brackets and n would be close brackets.

void generateParenthesis(int open,int close,int n,string ans){
    //Base Case - 
    if(open==n && close==n){
        cout<<ans<<endl;
        return;
    }

    //Recursive Case - 
    
    //add close
    if(open>close){  //add close only if number of close brackets > number of open brackets
        generateParenthesis(open,close+1,n,ans+")");
    }

    //add open - 
    if(open<n){     //add opne brackets only when open is less than n.
        generateParenthesis(open+1,close,n,ans+"(");
    }

    return;
}

int main(){
    int n;
    cin>>n;
    generateParenthesis(0,0,n,"");
    return 0;
}