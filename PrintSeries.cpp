#include<iostream>
using namespace std;
int main(){
    int counter,div;
    cin>>counter;
    cin>>div;
    int i=0;
    int n=1;
    while(i<10){
        if(((3*n+2)%div)!=0){
            cout<<3*n+2<<endl;
            i++;
        }
        n++;
    }
    return 0;
}