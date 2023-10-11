#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    char ele;
    char maxEle=str[0];
    int count;
    int maxcount=0;
    for(int i=0;i<str.length();i++){
        ele=str[i];
        count=0;
        for(int j=0;j<str.length();j++){
            if(str[j]==ele){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            maxEle=ele;
        }
    }
    cout<<maxEle;
    return 0;
}