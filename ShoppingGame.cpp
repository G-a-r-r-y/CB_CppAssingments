#include<iostream>
using namespace std;


void func1(int M,int N){
    int sumM=0,sumN=0;
    int i=1,j=2;
    while(sumM<=M and sumN<=N){
        sumM+=i;
        sumN+=j;
        i+=2;
        j+=2;
    }
    if(sumM>M){
        cout<<"Harshit"<<endl;
    }else{
        cout<<"Aayush"<<endl;
    }
}
int main(){
    int q;
    cin>>q;
    int M,N;
    while(q>0){
        cin>>M;
        cin>>N;
        func1(M,N);
        q--;
    }
    return 0;
}