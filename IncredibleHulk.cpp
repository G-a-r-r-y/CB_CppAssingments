#include<iostream>
#include<cmath>
using namespace std;


int steps(int n){
    
    int count=0;
    while(n>0){
        int p=0;
        while(pow(2,p)<=n){
            p++;
        }
        n=n-pow(2,p-1);
        count++;
    }
    return count;
}

int main(){
    int q;
    cin>>q;
    int n;
    while(q>0){
        cin>>n;
        cout<<steps(n)<<endl;
        q--;
    }
    return 0;
}