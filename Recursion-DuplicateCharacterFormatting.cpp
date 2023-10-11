//Doubt - Smjh nhi aa rha code mei kya galat hai!!!!!!!!!!!!
#include<iostream>
using namespace std;

string removingDuplicate(string str,string newStr,int i){
    
    //base case  -
    if(str[i]=='\0'){
        string s(1,str[i]);
        newStr+=s;
        return newStr;
    }

    //recursive case -
    if(str[i]==str[i+1]){
        string s(1,str[i]); //creating a string of 1 character, syntaz - string objectName(NoOfElements,element);
        newStr+=s;
        newStr+="*";
    }else{
        string s(1,str[i]);
        newStr+=s; 
    }
    cout<<newStr<<endl;
    return removingDuplicate(str,newStr,i+1);
}
int main(){
    string str;
    getline(cin,str);
    string newStr="";
    cout<<removingDuplicate(str,newStr,0);
    return 0;
}