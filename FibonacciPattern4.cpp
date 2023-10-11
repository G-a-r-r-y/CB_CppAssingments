#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<0;
        return 0;
    }else if(n==2){
        cout<<0<<endl<<1<<'\t'<<1;
        return 0;
    }else{
        int x=1,y=1;
        cout<<0<<endl;
        cout<<1<<'\t'<<1<<endl;
        for(int row=3;row<=n;row++){
            for(int i=0;i<row;i++){
                int z=x+y;
                cout<<z<<'\t';
                x=y;
                y=z;
            }
            cout<<endl;
        }
        return 0;
    }
}