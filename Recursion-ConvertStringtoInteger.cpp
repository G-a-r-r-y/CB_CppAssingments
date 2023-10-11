#include<iostream>
using namespace std;

void toInteger(string num,int i,int finalNum){
    //Base Case - 
    if(i==num.length()){
        cout<<finalNum;
        return;
    }

    //Recursive Case - 
    string ch=num.substr(i,1);
    int digit=stoi(ch);
    toInteger(num,i+1,finalNum*10+digit);
    return;
}

int main(){
    string str;
    cin>>str;
    toInteger(str,0,0);
    return 0;
}