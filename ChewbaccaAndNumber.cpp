#include<iostream>
using namespace std;


int main(){
    string num;
    cin>>num;
    for(int i=0;i<num.size();i++){
        char c=num[i];
        if(i==0 and c>='5' and c!='9'){   //since humme min possbile + number chahiye isliye hum >=5 condition check karenge.
            num[i]='9'-c+'0';            // +'0' kiye hai to maintain the string value.
        }else if(i!=0 and c>='5'){
            num[i]='9'-c+'0';
        }
    }
    cout<<num;
    return 0;
}