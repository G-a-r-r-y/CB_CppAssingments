#include<iostream>
using namespace std;

int func1(int x,int n){
    int remainder=x%n;
    if(remainder<=n/2){
        return remainder;
    }else{
        return n-remainder;
    }
}

int main(){
    int q;
    cin>>q;
    int x,n;
    while(q>0){
        cin>>x;
        cin>>n;
        cout<<func1(x,n)<<endl;
        q--;
    }
    return 0;
}