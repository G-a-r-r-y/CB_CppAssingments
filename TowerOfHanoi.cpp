#include<iostream>
using namespace std;
static int count=0;

void towerOfHanoi(string s,string h,string d,int n){
    if(n==1){
        cout<<"Move "<<n<<"th disc from " <<s<<" to "<<d<<endl;
        count++;
        return;
    }

    towerOfHanoi(s,d,h,n-1);
    cout<<"Move "<<n<<"th disc from " <<s<<" to "<<d<<endl;
    count++;
    towerOfHanoi(h,s,d,n-1);
}

int main(){
    int n;
    cin>>n;
    towerOfHanoi("T1","T3","T2",n);
    cout<<count;
    return 0;
}