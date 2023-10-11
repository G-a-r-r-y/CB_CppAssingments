#include<bits/stdc++.h>
using namespace std;

void dictionaryLarge(string str,int i,vector<string>&v){
    //Base Case - 
    if(i==str.length()-1){
        v.push_back(str);
        return;
    }

    //Recursive Case - 
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        dictionaryLarge(str,i+1,v);
        swap(str[i],str[j]);
    }
    return;
}

int main(){
    string str;
    getline(cin,str);
    vector<string>v;
    dictionaryLarge(str,0,v);

    //Printing from vector -
    for(auto x:v){
        if(x>str){
            cout<<x<<endl;
        }
    } 
    return 0;
}