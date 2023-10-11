#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1;row<=n;row++){

        //Printing space - 
        for(int i=0;i<n-row;i++){
            cout<<" ";
        }

        //Printing stars - 
        if(row==1 || row==n){
            for(int i=0;i<n;i++){
                cout<<"*";
            }
        }else{
            cout<<"*";
            for(int j=0;j<n-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}