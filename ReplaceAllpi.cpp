#include<iostream>
#include<string>
using namespace std;

void replace(string str){
    string str2="pi";
    string str3="3.14";
    int found=str.find(str2);        //Find the starting index where pi occurs first
    while(found<str.length()){
        str.erase(found,2);          //deletes 2 characters starting from index found.
        str.insert(found,str3);      //inserts str3 starting from index found.
        found=str.find(str2);
    }
    cout<<str<<endl;
}

int main(){
    int n;
    cin>>n;
    cin.ignore();     //Use cin.ignore() agar integer ke baad hum seedhe string input le rahe hai.
    string str;
    while(n>0){
        getline(cin,str);
        replace(str);
        n--;
    }
    return 0;
}