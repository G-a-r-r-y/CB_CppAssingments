#include<iostream>
using namespace std;
int main(){
    int limit;
    cin>>limit;
    int x=0;
    int y=1;
    int z=0;
    int i=0;
    while(i<limit-1){
        z=x+y;
        x=y;
        y=z;
        i++;
    }
    cout<<z;
    return 0;
}