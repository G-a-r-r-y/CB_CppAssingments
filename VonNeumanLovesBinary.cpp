#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int counter;
    cin>>counter;
    for(int i=0;i<counter;i++){
        int binary,digit;
        cin>>binary;
        int decimal=0;
        int j=0;
        while(binary>0){
            digit=binary%10;
            decimal=decimal+digit*pow(2,j);
            binary=binary/10;
            j++;
        }
        cout<<decimal<<endl;
    }
    return 0;
}