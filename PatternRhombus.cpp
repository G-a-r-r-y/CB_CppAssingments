#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    //Upper half - 
    for(int row=1;row<=n;row++){

        //space = 
        for(int i=0;i<n-row;i++){
            cout<<"\t";
        }

        
        //Numbers(first half) - 
        int j=row;
        for(int i=0;i<row;i++){
            cout<<j<<"\t";
            j++;
        }

        //Numbers(Second half) -
        int k=j-2;
        for(int i=0;i<row-1;i++){
            cout<<k<<"\t";
            k--;
        } 
        cout<<endl;
    }

    //Lower half - 
    for(int row=1;row<=n-1;row++){

        //space - 
        for(int i=0;i<row;i++){
            cout<<"\t";
        }

        //Numbers(first half) - 
        int j=n-row;
        for(int i=0;i<n-row;i++){
            cout<<j<<"\t";
            j++;
        }

        //Numbers(Second half) - 
        int k=j-2;
        for(int i=0;i<n-(row+1);i++){
            cout<<k<<"\t";
            k--;
        }
        cout<<endl;
    }
    return 0;
}