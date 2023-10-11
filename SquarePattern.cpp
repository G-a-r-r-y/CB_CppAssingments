#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        int j=row;
        for(int i=1;i<=n;i++){
            if(i<=j){
                cout<<j<<' ';
            }else{
                j++;
                cout<<j<<' ';
            }    
        }
        cout<<endl;
    }    
    return 0;
}