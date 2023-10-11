#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    //Upper Half - 
    for(int row=1;row<=n/2+1;row++){

        //first row - 
        if(row==1){
            for(int i=0;i<n;i++){
            cout<<"*"<<"\t";
            }
        }else{
            //Stars - 
            for(int i=0;i<n/2-(row-2);i++){
                cout<<"*"<<"\t";
            }

            //Space - 
            for(int i=0;i<2*(row-2)+1;i++){
                cout<<"\t";
            }

            //stars -
            for(int i=0;i<n/2-(row-2);i++){
                cout<<"*"<<"\t";
            }
        }
        cout<<endl;
    }

    //Lower Half - 
    int j=0;
    for(int row=1;row<=n/2;row++){
        //First row - 
        if(row==n/2){
            for(int i=0;i<n;i++){
                cout<<"*"<<"\t";
            }
        }else{
            
            //stars - 
            for(int i=0;i<2+(row-1);i++){
                cout<<"*"<<"\t";
            }

            //Space - 
            for(int i=0;i<n-4-j;i++){
                cout<<"\t";
            }
            j+=2;

            //stars - 
            for(int i=0;i<2+(row-1);i++){
                cout<<"*"<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}