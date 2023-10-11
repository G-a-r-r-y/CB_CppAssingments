#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(stack<char>s1,string eqn,int i){
    //Base Case - 
    if(s1.empty() and i==eqn.length()){
        return true;
    }else if(!s1.empty() and i==eqn.length()){
        return false;
    }
    //cout<<eqn[i]<<endl;
    //Recursive case - 
    if(eqn[i]=='['||eqn[i]=='{'||eqn[i]=='('){
        s1.push(eqn[i]);
    }else if(eqn[i]==']'){
        if(s1.top()=='['){
            s1.pop();
        }else{
            return false;
        }
    }else if(eqn[i]=='}'){
        if(s1.top()=='{'){
            s1.pop();
        }else{
            return false;
        }
    }else if(eqn[i]==')'){
        if(s1.top()=='('){
            s1.pop();
        }else{
            return false;
        }
    }
    return isBalanced(s1,eqn,++i);
}
int main(){
    string eqn;
    getline(cin,eqn);
    stack<char>s1;
    if(isBalanced(s1,eqn,0)==true){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}