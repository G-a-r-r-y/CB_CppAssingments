#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cin>>num1>>num2;
    int i=1;
    while(true){
        if(i%num1==0 && i%num2==0){
            cout<<i;
            return 0;
        }
        i++;
    }
}