#include<iostream>
#include<cmath>
using namespace std;


void countSetBits(int num1,int num2){
    int count=0;
    for(int i=num1;i<=num2;i++){
        int x=i;
        while(x>0){
            if(x%2==1){
                count++;
            }
            x=x/2;
        }
    }
    cout<<count;
}


int main(){
    int n,num1,num2;
    cin>>n;
    while(n>0){
        cin>>num1;
        cin>>num2;
        countSetBits(num1,num2);
        n--;
    }
    return 0;
}