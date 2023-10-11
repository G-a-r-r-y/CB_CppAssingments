#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        char newChar;
        if(i%2==0){
            newChar=str[i]+1;
        }else{
            newChar=str[i]-1;
        }
        str[i]=newChar;
    }
    cout<<str;
    return 0;
}