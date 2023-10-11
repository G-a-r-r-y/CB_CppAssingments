#include<iostream>
using namespace std;

int triangle(int num,int n){
    //base case
    if(num==n){
        return n;
    }

    //recursive case
    return num+triangle(num+1,n);
}

int main(){    
    int n;
    cin>>n;
    cout<<triangle(0,n);
    return 0;
}