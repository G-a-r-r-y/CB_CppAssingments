#include<iostream>
#include<vector>
using namespace std;

void allSubsequences(string str,string newStr,int i,vector<string>&v1){
    //Base Case - 
    if(i==str.length()){
        //cout<<newStr<<endl;
        v1.push_back(newStr);
        return;
    }

    //Recursive Case - 

    //Not Take - 
    allSubsequences(str,newStr,i+1,v1);

    //Take -
    newStr+=str[i];
    allSubsequences(str,newStr,i+1,v1);
    
}

void displayLexicographically(vector<string>&v1){
    
    //Sorting - 
    for(int i=0;i<v1.size()-1;i++){
        for(int j=0;j<v1.size()-i-1;j++){
            if(v1[j]>v1[j+1]){
                swap(v1[j],v1[j+1]);
            }
        }
    }

    //Printing - 
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    string str;
    vector<string>v1;
    while(n>0){
        cin>>str;
        allSubsequences(str,"",0,v1);
        displayLexicographically(v1);
        v1.clear();
        n--;
    }    
    return 0;
}