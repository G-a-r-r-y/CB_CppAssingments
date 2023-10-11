#include<bits/stdc++.h>
using namespace std;

void keypadCodes(string convention[],string num,int index,string ans,int &count){
    //Base Case - 
    if(index==num.length()){
        count++;
        cout<<ans<<" ";
        return;
    }

    //Recursive Case -  
    int conventionIndex=num[index]-'0';
    string selectStr=convention[conventionIndex-1];
    for(int i=0;i<selectStr.length();i++){
        //Note - writing ans=ans + selectedStr[i] and writing the same in function call will give us 2 different outputs.
        //ans=ans+selectStr[i];
        keypadCodes(convention,num,index+1,ans+selectStr[i],count);
    }
    return;
}

int main(){
    string convention[]={"abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
    string num;
    cin>>num;
    int count=0;
    keypadCodes(convention,num,0,"",count);
    cout<<endl<<count;
    return 0;
}