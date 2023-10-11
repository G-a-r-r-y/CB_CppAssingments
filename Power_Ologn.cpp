#include<bits/stdc++.h>
using namespace std;

double powerFunction(double base,int power){
    double ans=1.0;
    long long tempPower=power;
    if(tempPower<0){   //Agar power minus mei hai toh pehle usse positive banado.
        tempPower= -1*tempPower;
    }

    while(tempPower){
        if(tempPower%2==1){
            ans=ans*base;
            tempPower=tempPower-1;
        }else{
            base=base*base;
            tempPower=tempPower/2;
        }
    }

    //For negative power,end mei div by 1 kardo.
    if(power<0){
        ans=1.0/ans;
    }
    return ans;
}

int main(){
    double base;
    cin>>base;
    int power;
    cin>>power;
    cout<<powerFunction(base,power)<<endl;
    return 0;
}