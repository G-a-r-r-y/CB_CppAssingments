#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //Upper half - 
    for(int row=1;row<=n;row++){

        int j=n-(row-1);
        int k=1;

        //Space - 
        for(int i=0;i<row-1;i++){
            cout<<"  ";
        }

        //Printing first half of the row -
        while(j>=0){
            cout<<j<<" ";
            j--;
        } 

        // //Printing rest - 
        while(k<=n-(row-1)){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    //Middle row - 
    for(int i=0;i<n;i++){
        cout<<"  ";
    }
    cout<<0<<endl;

    //Lower half - 

    for(int row=1;row<=n;row++){

        int j=row;
        int k=1;

        //space - 
        for(int i=0;i<n-row;i++){
            cout<<"  ";
        }

        //Printing first half of the row -
        for(int i=0;i<row+1;i++){
            cout<<j<<" ";
            j--;
        }

        //Printing rest  - 
        for(int i=0;i<row;i++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}