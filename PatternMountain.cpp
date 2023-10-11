#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int x=2*(n-1)-1;

    for(int row=1;row<=n;row++){

        int j=1;
        if(row==n){
            //Printing first half of the row - 
            for(int i=0;i<n;i++){
                cout<<j<<'\t';
                j++;
            }
            
            int k=row-1;
            //Printing remaining row - 
            for(int i=0;i<n-1;i++){
                cout<<k<<'\t';
                k--;
            }
        }else{
            int k=row;
            //numbers(before space) -
            for(int i=0;i<row;i++){
                cout<<j<<'\t';
                j++;
            }

            //space - 
            for(int i=0;i<x;i++){
                cout<<"\t";
            }

            //numbers(after space) -
            for(int i=0;i<row;i++){
                cout<<k<<'\t';
                k--;
            }
            x-=2;
        }
        cout<<endl;
    }
    return 0;
}