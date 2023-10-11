#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1;row<=n;row++){

        int j=1;
        //Printing Numbers - 
        while(j<=n-(row-1)){
            cout<<j<<" ";
            j++;
        }

        //Printing stars - 
        for(int i=0;i<2*(row-1)-1;i++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}