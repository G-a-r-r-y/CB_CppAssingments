#include<iostream>
using namespace std;
int main(){
    int decimal;
    cin>>decimal;
    if(decimal/8<8){
        int octal=(decimal/8)*10+decimal%8;
        cout<<octal;
        return 0;
    }else{
        int octal=1;                     // 1            
        while(decimal>=8){             // 320   40    
            octal=octal*10+decimal%8;    // 10  100   
            decimal=decimal/8;           // 40   5
        }
        octal=octal*10 +decimal;
        
        //reversing to required octal value
        int reverse=0;
        while(octal>0){
            reverse=reverse*10+octal%10;
            octal=octal/10;
        }
        cout<<reverse/10;
    }
    return 0;
}