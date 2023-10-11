#include<iostream>
using namespace std;

int main(){
    string str,newStr;
    cin>>str;
    int i=0;
    while(i<str.length()){
        newStr+=str[i];
        int j=i+1;
        while(str[i]==str[j]){
            j++;
        }
        i=j;
    }
    cout<<newStr;
    return 0;
}