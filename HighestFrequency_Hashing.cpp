#include<bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<int,int>h;
    int num,ele;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>ele;
        h[ele]=h[ele]+1;
    }

    int maxValue=INT_MIN;
    for(auto x:h){
        if(x.second>maxValue){
            maxValue=x.second;
        }
    }

    for(auto x:h){
        if(x.second==maxValue){
            cout<<x.first;
        }
    }
    return 0;
}