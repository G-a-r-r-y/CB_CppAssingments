//Question - 
// Take as input N, a number. Print the following pattern. Can you do it recursively ?!
// (for N =4)

// *

// * *

// * * *

// * * * *

// * * * * *


#include<iostream>
using namespace std;

void patternTriangle(int i,int n){
    //Base Case - 
    if(i==n+1){
        return;
    }

    //Recursive Case - 
    for(int j=0;j<i;j++){
        cout<<"*\t";
    }
    cout<<endl;
    return patternTriangle(i+1,n);
}
int main(){
    int n;
    cin>>n;
    patternTriangle(1,n);
    return 0;
}