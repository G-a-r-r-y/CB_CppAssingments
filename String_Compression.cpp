#include<iostream>
using namespace std;


int main(){
    string str1;
    cin>>str1;
    string str2="";
    int i=0;
    while(i<str1.length()){
        str2+=str1[i];
        int count=1;
        while(str1[i]==str1[i+1]){
            count++;
            i++;
        }
        if(count>1){
            string ele=to_string(count);
            str2+=ele;
        }
        i++;
    }
    cout<<str2;
    return 0;
}
