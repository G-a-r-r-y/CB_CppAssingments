#include<iostream>
using namespace std;

int fact(int ele){
    int factorial=1;
    while(ele!=0){
        factorial*=ele;
        ele--;
    }
    return factorial;
}

int nCr(int n,int r){
    return (fact(n))/(fact(n-r)*fact(r));
}


int main(){
   
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        
        cout<<1;

        //Middle Part  - 
        if(row==0){
            cout<<endl;
            continue;
        }
        for(int i=1;i<=row;i++){
            cout<<"\t";
            cout<<nCr(row,i);
        }
        cout<<endl;
    }
    return 0;
}