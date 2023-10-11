#include<bits/stdc++.h>
using namespace std;

void shiftLeftOnce(queue<int>&q){
    int ele=q.front();
    q.pop();
    q.push(ele);
}

int main(){
    int n;
    cin>>n;
    int ele;

    queue<int>givenOrd;
    for(int i=0;i<n;i++){
        cin>>ele;
        givenOrd.push(ele);;
    }

    queue<int>correcOrd;
    for(int i=0;i<n;i++){    
        cin>>ele;
        correcOrd.push(ele);;
    }

    int count=0;
    while(correcOrd.empty()!=true){
        if(correcOrd.front()==givenOrd.front()){
            correcOrd.pop();
            givenOrd.pop();
        }else{
            shiftLeftOnce(givenOrd);
        }
        count++;
    }
    cout<<count;
    return 0;
}