#include<bits/stdc++.h>
using namespace std;

bool checkingString(string str,int i){
    for(int j=0;j<i;j++){
        if(str[j]==str[i]){
            return true;
        }
    }
    return false;
}

void trickyPermutations(string str,int i,vector<string>&v){
    //Base Case - 
    if((i==str.length()-1)){ 
        cout<<str<<endl;
        // v.push_back(str); 
        return;
    }

    //Recursive Case - 
    for(int j=i;j<str.length();j++){  
        bool check=checkingString(str,i);
        if(check==false){
            swap(str[i],str[j]);
            trickyPermutations(str,i+1,v);
            //BackTracking -         
            swap(str[i],str[j]);
        }
    }
    
    return;
}

int main(){
    string str;
    cin>>str;
    vector<string>v;
    trickyPermutations(str,0,v);

    //Printing Vector - 
    // sort(v.begin(),v.end());
    // for(auto x:v){
    //     cout<<x<<endl;
    // }
    return 0;
}