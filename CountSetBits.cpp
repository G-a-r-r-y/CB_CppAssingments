#include<iostream>
using namespace std;

void countbits(int num){
    int count=0;
    while(num>0){
        if(num%2==1){
            count++;
        }
        num=num/2;
    }
    cout<<count<<endl;
}


int main(){
    int n;
    cin>>n;
    int num;
    while(n>0){
        cin>>num;
        countbits(num);
        n--;
    }
    return 0;
}