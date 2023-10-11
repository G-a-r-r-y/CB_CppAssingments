#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch>='a' and ch<='z'){
            str[i]=(int)ch-32;
        }else if (ch>='A' and ch<='Z')
        {
            str[i]=(int)ch+32;
        }
    }
    cout<<str;
    return 0;
}
