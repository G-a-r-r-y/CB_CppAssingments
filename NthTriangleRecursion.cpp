#include<iostream>
using namespace std;

int NthTriangle(int n){
    if(n==0){
        return 0;
    }
    return n+NthTriangle(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<NthTriangle(n);
    return 0;
}