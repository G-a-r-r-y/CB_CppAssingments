#include<iostream>
using namespace std;
int main(){
    int counter;
    cin>>counter;
    for(int i=0;i<counter;i++){
        int number;
        int sumEven=0;
        int sumOdd=0;
        cin>>number;
        int digit;
        while(number>0){
              digit=number%10;
              if(digit%2==0){
                sumEven+=digit;
              }else{
                sumOdd+=digit;
              }
              number=number/10;
        }
        if(sumEven%4==0 || sumOdd%3==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        } 
    }
    return 0;
}