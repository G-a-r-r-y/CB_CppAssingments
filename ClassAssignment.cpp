#include<bits/stdc++.h>
using namespace std;

// static int count=0;
int classAssignment(int n,int i,string ans){
    //Base Case - 
    if(ans.length()==n){
        //cout<<ans<<endl;
        return 1;
    }

    //Recursive Case - 
    //Take a -
    int num1=0;
    num1=classAssignment(n,i+1,ans+'a');

    //Take b (only if previous was not b)-
    int num2=0;
    if(i==0){
        num2=classAssignment(n,i+1,ans+'b');
    }else{
        if(ans[i-1]!='b'){
            num2=classAssignment(n,i+1,ans+'b');
        }
    }
    return num1+num2;
}

int main(){
    int t,n;
    cin>>t;
    int i=1;
    while(t>0){
        cin>>n;
        int count=classAssignment(n,0,"");
        cout<<"#"<<i<<" : "<<count<<endl;
        i++;
        t--;
    }
    return 0;
}