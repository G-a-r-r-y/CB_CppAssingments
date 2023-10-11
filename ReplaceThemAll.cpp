#include<iostream>
using namespace std;

int main(){

    long long int num;
    cin>>num;

    if(num==0){
        cout<<5;
    }else{
        long long int reverse1=0;
        long long int reverse2=0;
        long long int remainder=0;

        //Reversing the number to replace all Zero's with 5 -
        while(num>0){
            remainder=num%10;
            if(remainder==0){
                reverse1=reverse1*10+5;
            }else{
                reverse1=reverse1*10+remainder;
            }
            num=num/10;
        }

        //Reversing the obtained result to get the answer in proper format -
        while(reverse1>0){
            remainder=reverse1%10;
            reverse2=reverse2*10+remainder;
            reverse1=reverse1/10;
        }
        cout<<reverse2;
    }
    return 0;
}