#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1;
    cin>>num2;
    
    if(num2>num1){
        for(int i=num1;i<=num2;i++){
            int i1,i2;
            i1=i2=i;
        
            int power=0;
            while(i1>0){
                power++;
                i1=i1/10;
            }

            int sum=0;
            int digit;
            while(i2>0){
                digit=i2%10;
                sum=sum+pow(digit,power);
                i2=i2/10;
            }

            if(sum==i){
                cout<<sum<<endl;
            }
        }
    }else{
        for(int i=num2;i<=num1;i++){
            int i1,i2;
            i1=i2=i;
        
            int power=0;
            while(i1>0){
                power++;
                i1=i1/10;
            }

            int sum=0;
            int digit;
            while(i2>0){
                digit=i2%10;
                sum=sum+pow(digit,power);
                i2=i2/10;
            }

            if(sum==i){
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}