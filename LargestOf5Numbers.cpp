#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1;
    int max=num1;
    for(int i=1;i<5;i++){
        cin>>num2;
        if(max<num2){
            max=num2;
        }
    }
    cout<<max;
    return 0;
}