#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++){

        //Printing Space 
        for(int i=0;i<n-row;i++){
            cout<<"  ";
        }

        //Printing Stars
        for(int j=0;j<row;j++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }    
    return 0;
}