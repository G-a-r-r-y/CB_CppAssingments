#include<iostream>
using namespace std;

int main(){
    string str1;
    getline(cin,str1);
    for(int i=0;i<str1.length();i++){
        if(str1[i]>='A' and str1[i]<='Z'){
            cout<<endl;
        }
        cout<<str1[i];
    }
    return 0;
}