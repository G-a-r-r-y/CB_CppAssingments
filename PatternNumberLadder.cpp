#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    for(int row=1;row<=n;row++){
        for(int j=0;j<row;j++){
            cout<<i<<'\t';
            i++;
        }
        cout<<endl;
    }
    return 0;
}