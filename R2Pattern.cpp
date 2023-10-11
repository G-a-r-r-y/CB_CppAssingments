#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=n;row>0;row--){
        if(row%2!=0){
            cout<<row<<endl;
        }
    }
    for(int row=1;row<=n;row++){
        if(row%2==0){
            cout<<row<<endl;
        }
    }
    return 0;
}