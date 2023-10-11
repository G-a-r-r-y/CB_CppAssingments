#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int binary,digit;
    cin>>binary;
    int number=0;
    int i=0;
    while(binary>0){
        digit=binary%10;
        number=number+digit*pow(2,i);
        binary=binary/10;
        i++;
    }
    cout<<number;
    return 0;
}