#include<iostream>
using namespace std;
int main(){
    int number,digit;
    cin>>number;
    int sumOdd=0;
    int sumEven=0;
    int i=1;
    while(number>0){
        digit=number%10;
        if(i%2==0){
            sumEven+=digit;
        }else{
        sumOdd+=digit;
        }
        i++;
        number=number/10;
    }
    cout<<sumOdd<<endl<<sumEven;
    return 0;
}