#include<iostream>
using namespace std;

static int count=0;
void subsequences(string str, string tempAns, int i){
    //Base Case - 
    if(i==str.length()){
        cout<<tempAns<<" ";
        count++;
        return;
    }

    //Recursive Case - 
    //Not take 
    subsequences(str,tempAns,i+1);

    //take
    subsequences(str,tempAns+str[i],i+1);
}

int main(){
    string str;
    cin>>str;
    subsequences(str," ",0);
    cout<<endl<<count;
    return 0;
}