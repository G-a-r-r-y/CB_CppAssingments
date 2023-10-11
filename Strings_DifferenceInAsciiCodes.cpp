#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cin>>str;
    string str2="";
    int num,nextNum;
    for(int i=0;i<str.length()-1;i++){
        num=str[i];
        nextNum=str[i+1];
        int diff=nextNum-num;
        string diffChar=to_string(diff);
        str2+=str[i];
        str2+=diffChar;
    }
    str2+=str[str.length()-1];
    cout<<str2;
    return 0;
}