#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        //Printing number
        cout<<row<<'\t';

        //Printing Zeros
        if(row!=1 || row!=2){    
            for(int i=0;i<row-2;i++){
                cout<<0<<'\t';
            }
        }

        //Printing number again 
        if(row!=1){
        cout<<row;
        }
        cout<<endl;
    }
    return 0;
}