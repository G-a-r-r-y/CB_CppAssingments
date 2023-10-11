#include<iostream>
using namespace std;

bool present(int ele, string str2){
    for(int i=0;i<str2.length();i++){
        if(str2[i]==ele){
            return true;
        }
    }
    return false;
}

int main(){
    string str;
    cin>>str;
    string str2="";
 
    for(int i=0;i<str.length();i++){
        char ele=str[i];
        int count=0;
        if(present(ele,str2)==false){
            str2+=ele;
            for(int i=0;i<str.length();i++){
                if(str[i]==ele){
                    count++;
                }
            }
            if(count!=1){
                string countstr=to_string(count);
                str2+=countstr;
            }
        }
    }
    cout<<str2;
    return 0;
}