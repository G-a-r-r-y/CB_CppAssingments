#include<bits/stdc++.h>
using namespace std;

int uglyNumbers(int num){
    long long int arr[num+1];
    arr[1]=1;
    long long int p2=1;
    long long int p3=1;
    long long int p5=1;

    for(long long int i=2;i<=num;i++){

        long long int val1=2*arr[p2];
        long long int val2=3*arr[p3];
        long long int val3=5*arr[p5];

        long int minNumber=min(val1,min(val2,val3));
        arr[i]=minNumber;

        if(minNumber==val1){
            p2++;
        }
        if(minNumber==val2){
            p3++;
        }
        if(minNumber==val3){
            p5++;
        }
    }
    return arr[num];
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        int num;
        cin>>num;
        cout<<uglyNumbers(num)<<endl;
        t--;
    }
    return 0;
}