#include<bits/stdc++.h>
using namespace std;

void lexicoOrder(int i,int n){
    //Base - 
    if(i>n){
        return ;
    }

    //Recursion - 
    cout<<i<<" ";
    for(int j=0;j<=9;j++){
        lexicoOrder(i*10+j,n);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<0<<" ";
    for(int i=1;i<=9;i++){
        lexicoOrder(i,n);
    }
    return 0;
}