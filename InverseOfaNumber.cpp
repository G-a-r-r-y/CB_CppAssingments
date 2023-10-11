#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number;                     
    cin>>number;
    int sum=0;
    int digit;
    int place=1;
    while(number>0){ 
        digit=number%10;           
        sum+=place*pow(10,digit-1);  
        number=number/10;
        place++;
    }
    cout<<sum;
    return 0;
}