#include<bits/stdc++.h>
using namespace std;

char intToChar(int n){
    char ch=n+96;
    return ch;
}

void codesOfTheString(string str,string ans,int index,vector<string>&v){
    //Base Case - 
    if(index==str.length()){
        // reverse(ans.begin(),ans.end());
        v.push_back(ans);
        return;
    }

    //Recursive - 
    //Take 1st index only -
    string tempStr=str.substr(index,1);
    int num=stoi(tempStr);
    if(num>0 and num<=9){
        char tempCh=intToChar(num);
        codesOfTheString(str,ans+tempCh,index+1,v);
    }
    //codesOfTheString(str,ans,index+1,v);

    //Take 2 indices -
    if(index<=str.length()-2){
        string tempStr=str.substr(index,2);
        int num=stoi(tempStr);
        if(num>0 and num<=26){
            char tempCh=intToChar(num);
            codesOfTheString(str,ans+tempCh,index+2,v);
        }
        //codesOfTheString(str,ans,index+2,v);
    } 
    return;
}

int main(){
    string str;
    cin>>str;
    vector<string>v;
    codesOfTheString(str,"",0,v);
    cout<<"[";
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<", ";
    }
    cout<<v[v.size()-1]<<"]";
    return 0;
}