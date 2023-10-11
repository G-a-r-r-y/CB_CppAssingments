#include<iostream>
using namespace std;
int main(){
    int min,max,step;
    cin>>min>>max>>step;
    for(int i=min;i<=max;i=i+step){
        int celsius=((i-32)*5)/9;
        cout<<i<<" "<<celsius<<endl;
    }
    return 0;
}