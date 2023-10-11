#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string str,stack<char>&s,int i){
    
    //Base Case - 
    if(i==str.length() and s.empty()==true){
        return true;
    }

    //Recursive Case - 
    if(str[i]=='('||str[i]=='{'||str[i]=='['){
        s.push(str[i]);
    }else{
        if(str[i]==')'){
            if(!s.empty() and s.top()=='('){    //Agar stack empty hai toh uska top exist hi nahi karega!!!
                s.pop();
            }else{
                return false;
            }
        }else if(str[i]==']'){
            if(!s.empty() and s.top()=='['){
                s.pop();
            }else{
                return false;
            }
        }else if(str[i]=='}'){
            if(!s.empty() and s.top()=='{'){
                s.pop();
            }else{
                return false;
            }
        }
    }
    return isBalanced(str,s,i+1);
}

int main(){
    string str;
    getline(cin,str);
    //cout<<str.length();
    stack<char>s;
    if(isBalanced(str,s,0)==true){
        cout<<"Yes";
    }else if(isBalanced(str,s,0)==false){
        cout<<"No";
    }
    return 0;
}