#include<bits/stdc++.h>
using namespace std;

void smartKeypad(string table[],string num,string ans,int index){
    //Base Case - 
    if(index==num.length()){
        cout<<ans<<endl;
        return;  
    }


    //Recursive Case - 
    char numChar=num[index];
    int tableIndex=numChar-'0';
    string selectedStr=table[tableIndex];
    for(int i=0;i<selectedStr.length();i++){
        char ch=selectedStr[i];
        smartKeypad(table,num,ans+ch,index+1);
    }
    return;
}
int main(){
    string table[]={ " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
    string num;
    cin>>num;
    smartKeypad(table,num,"",0);
    return 0;
}