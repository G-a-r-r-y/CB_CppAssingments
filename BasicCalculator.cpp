#include<iostream>
using namespace std;
int main(){
    while(true){
        char ch;
        cin>>ch;
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'){
            int num1,num2;
            cin>>num1>>num2;
            if(ch=='+'){
                cout<<num1+num2<<endl;
            }else if(ch=='-'){
                cout<<num1-num2<<endl;
            }else if(ch=='*'){
                cout<<num1*num2<<endl;
            }else if(ch=='/'){
                cout<<num1/num2<<endl;
            }else if(ch=='%'){
                cout<<num1/num2<<endl;
            }
        }    
        else if(ch=='x' || ch=='X'){
            return 0;
        }else{
            cout<<"Invalid operation. Try again."<<endl;
        }
    }
    
    return 0;
}