#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=n;row>0;row--){
        
        //Printing space 
        for(int j=0;j<n-row;j++){
            cout<<" ";
        }
        
        
        //Printing stars 
        for(int i=0;i<row;i++){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
    return 0;
}