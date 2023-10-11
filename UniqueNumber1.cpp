#include<iostream>
using namespace std;

int main(){
    int x,q;
    int num=0;
    cin>>q;
    while(q>0){
        cin>>x;
        num=num^x;
        q--;
    }
    cout<<num;
    return 0;
}