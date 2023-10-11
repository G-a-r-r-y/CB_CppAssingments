#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=n;
    int digit;
    int count=0;

    if(n==0){
        m=5;
    }else{
        while(n>0){
            digit=n%10;
            if(digit==0){
                m=m+5*pow(10,count);
            }
            n=n/10;
            count++;
        }
    }
    cout<<m;
    return 0;
}