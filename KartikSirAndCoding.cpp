#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    int n;
    cin>>n;
    int choice;
    for(int i=0;i<n;i++){
        cin>>choice;
        if(choice==2){
            int cost;
            cin>>cost;
            s.push(cost);
        }else if(choice==1){
            if(!s.empty()){
                cout<<s.top()<<endl;
                s.pop();
            }else{
                cout<<"No Code"<<endl;
            }
        }
    }
    return 0;
}