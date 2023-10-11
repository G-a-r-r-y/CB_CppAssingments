#include<bits/stdc++.h>
using namespace std;

int longestValidParenthesis(string str){
    //Making a stack containing indices where the string becomes unbalanced.
    stack<int>s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            s.push(i);
        }else{
            if(!s.empty() and str[s.top()]=='('){
                s.pop();
            }else{
                s.push(i);
            }
        }
    }

    //Now using the stack formed, find the largest interval between
    //the indices stored in the stack.
    int maxNum=0;
    int endTerminal=str.length();  //Yeh condition yaad rakho
    while(!s.empty()){
        int startTerminal=s.top();
        s.pop();
        maxNum=max(maxNum,endTerminal-startTerminal-1); //-1 bhi karna hai end mei cause index 0 se start hota hai
        endTerminal=startTerminal;
    }
    //yaha par bhi max isliye calculate kar rhe hai cause
    //stack mei humne 0 index nhi daala tha toh uske interval ka bhi dhyaan rakhna hai.
    return max(endTerminal,maxNum); 
}

int main(){
    string str;
    cin>>str;
    int count=longestValidParenthesis(str); 
    cout<<count;   
    return 0;
}