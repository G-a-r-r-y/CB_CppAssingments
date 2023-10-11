#include<iostream>
#include<string>
using namespace std;

int findOccureneces(string str,char ch){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            count++;
        }
    }
    return count;
}
int main(){
    string str;
    getline(cin,str);
    int len=str.length();
    int count=findOccureneces(str,'x');
    int i=0;
    while(i<(len-count)){
        if(str[i]=='x'){
            str.erase(str.begin()+i);   //
            str.push_back('x');         //Appending x to the end;
            continue;
        }
        i++;
    }
    cout<<str;
    return 0;
}