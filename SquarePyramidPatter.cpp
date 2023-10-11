#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        int i=1;
        int x=1;
        for(int j=0;j<row;j++){
            cout<<i<<" ";
            i+=2*x+1;
            x++;
        }
        cout<<endl;
    }
    return 0;
}