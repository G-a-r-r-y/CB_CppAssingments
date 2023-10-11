#include<iostream>
using namespace std;

bool isPalindromeSubString(string subString){
    for(int i=0;i<subString.length()/2;i++){
        if(subString[i]==subString[subString.length()-i-1]){
            continue;
        }else{
            return false;
        }
    }
    return true;

}

int main(){
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.length();i++){
        string subString(1,str[i]);
        count++;
        for(int j=i+1;j<str.length();j++){
            subString+=str[j];
            if(isPalindromeSubString(subString)==true){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}