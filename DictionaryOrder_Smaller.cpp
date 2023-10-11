#include<bits/stdc++.h>
using namespace std;

void dictionaryOrder(string str,int l,int r,vector<string>&v){
    //Base Case - 
    if(l==r){
        v.push_back(str);
        return;
    }

    //Recursive Case - 
    for(int i=l;i<r;i++){

        //Swapping done - 
        swap(str[l],str[i]);

        //Calling recursion - 
        dictionaryOrder(str,l+1,r,v);

        //BackTrack - 
        swap(str[l],str[i]);
    }
    return;
}

int main(){
    string str;
    cin>>str;
    vector<string>v;
    dictionaryOrder(str,0,str.length(),v);
    sort(v.begin(),v.end());
    for(auto x:v){
        if(x<str){
            cout<<x<<endl;
        }     
    }
    return 0;
}