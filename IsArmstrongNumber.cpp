#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cin>>num;
    int copy1,copy2;
    copy1=copy2=num;


    //Calculating power
    int power=0;
    while(num>0){
        power++;
        num=num/10;
    }


    //Calculating sum for checking condition
    int sum=0;
    int digit;
    while(copy2>0){
        digit=copy2%10;
        sum+=pow(digit,power);
        copy2=copy2/10;
    }
    

    //Checking whether armstrong or not
    if(sum==copy1){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}