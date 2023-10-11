#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    //Upper half - 
    for(int row=1;row<n;row++){

        //Printing starting row - 
        if(row==1){
            for(int i=0;i<2*n-1;i++){
                cout<<"*";
            }
        }else{
            //Printing stars(first half) - 
            for(int i=0;i<n-(row-1);i++){
                cout<<"*";
            }

            //Printing space - 
            for(int i=0;i<2*(row-2)+1;i++){
                cout<<" ";
            }

            //Printing remaining row - 
            for(int i=0;i<n-(row-1);i++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    //Lower part - 
    int sp=2*n-3;
    for(int row=1;row<=n;row++){

        //Printing last row
        if(row==n){
            for(int i=0;i<2*n-1;i++){
                cout<<"*";
            }
        }else{
            //stars - 
            for(int i=0;i<row;i++){
                cout<<"*";
            }

            //Space -
            for(int i=0;i<sp;i++){
                cout<<" ";
            }
            sp-=2;

            //Remaining stars - 
            for(int i=0;i<row;i++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;

}