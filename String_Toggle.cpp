#include<bits/stdc++.h>
using namespace std;

//Function to toggle between uppercase and lowercase characters
char toggle(char ch){    
    if(ch>='A' and ch<='Z'){
        return ch+32;
    }else{
        return ch-32;
    }
    return ch;
}

void func1(int i,int n,string newStr,string str,vector<string>&v){
    //Base Case - 
    if(i==n){
        v.push_back(newStr);
        return;
    }

    //Recursive Case - 

    //Simply Add - 
    func1(i+1,n,newStr+str[i],str,v);

    //Toggle and add -
    if((str[i]>='A' and str[i]<='Z')||(str[i]>='a' and str[i]<='z')){ //Have to check to avoid repetitive cases
        char ch=toggle(str[i]);
        func1(i+1,n,newStr+ch,str,v);
    }


}

int main(){
    int t;
    cin>>t;
    while(t>0){
        string str;
        cin>>str;
        int len=str.length();
        vector<string>v;
        func1(0,len,"",str,v);
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        t--;
    }
    return 0;
}