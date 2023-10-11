#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    int digit1;
    cin>>digit1;
    int count=0;
    int digit2;
    while(number>0){
        digit2=number%10;
        if(digit2==digit1){
            count++;
        }
        number=number/10;
    }
    cout<<count;
    return 0;
}