#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int max=0;
    for(int a=x;a<=y;a++){
        for(int b=x;b<=y;b++){
            if((a^b)>max){
                max=(a^b);
            }
        }
    }
    cout<<max;
    return 0;
}