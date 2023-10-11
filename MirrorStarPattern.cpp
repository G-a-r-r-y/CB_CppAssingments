#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //Upper Part - 
    for(int row=1;row<=n/2+1;row++){
        
        //Space - 
        for(int i=0;i<n/2-(row-1);i++){
            cout<<"\t";
        }

        //stars - 
        for(int j=0;j<2*(row-1)+1;j++){
            cout<<'*'<<'\t';
        }
        cout<<endl;
    }

    //Lower Part - 
    for(int row=1;row<=n/2;row++){
        
        //Space - 
        for(int i=0;i<row;i++){
            cout<<"\t";
        }

        //Stars - 
        for(int j=0;j<n-row*2;j++){
            cout<<'*'<<'\t';
        }
        cout<<endl;

    }
    return 0;
}
