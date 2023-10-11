#include<iostream>
using namespace std;

static int count=0;
void asciiSubsequences(string str,string ans,int i){

    //Base Case - 
    if(i==str.length()){
        cout<<ans<<"";
        count++;
        return;
    }

    //Recursive Case- 

    char ch=str[i];

    //Not Take - 
    asciiSubsequences(str,ans,i+1);

    //Take 
    
    //1.
    // ans+=ch;
    // asciiSubsequences(str,ans,i+1);

    //2.
    asciiSubsequences(str,ans+ch,i+1);

    // Doubt - 1 and 2 produces different outcomes, why???

    //Take ascii - 
    int num=ch;
    ans+=to_string(num);
    asciiSubsequences(str,ans,i+1);
}

int main(){
    string str;
    cin>>str;
    asciiSubsequences(str," ",0);
    cout<<endl<<count;
    return 0;
}