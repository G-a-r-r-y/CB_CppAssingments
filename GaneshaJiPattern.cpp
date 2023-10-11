#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    //Upper half - 
    for(int row=1;row<=n/2;row++){

        cout<<"*";
        
        //Space - 
        for(int i=0;i<(n/2+1)-2;i++){
            cout<<" ";
        }

        cout<<"*";

        if(row==1){
            for(int i=0;i<n/2;i++){
                cout<<"*";
            }
        }

        cout<<endl;
    }


    //Middle row - 
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;


    //lower half - 
    for(int row=1;row<=n/2;row++){

        //space - 
        if(row!=n/2){
            for(int i=0;i<n/2;i++){
                cout<<" ";
            }
        }

        //stars - 
        if(row!=n/2){
            cout<<"*";
        }else{
            for(int i=0;i<n/2+1;i++){
                cout<<"*";
            }
        }

        //space - 
        for(int i=0;i<n/2-1;i++){
            cout<<" ";
        }

        cout<<"*"<<endl;

    }

    return 0;
}