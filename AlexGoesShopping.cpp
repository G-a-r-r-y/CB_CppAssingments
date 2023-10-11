#include <iostream>
using namespace std;

string YesNo(int money,int k,int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(money%arr[i]==0){
            //cout<<arr[i];
            count++;
        }
    }
    //cout<<count;
    if(count>=k){
        return "Yes";
    }else{
        return "No";
    }
}

int main(){
    int noOfItems;
    cin>>noOfItems;
    int arritems[noOfItems];
    for(int i=0;i<noOfItems;i++){
        cin>>arritems[i];
    }

    // for(int i=0;i<noOfItems;i++){
    //     cout<<arritems[i]<<" ";
    // }

    int testCases;
    cin>>testCases;
    while(testCases>0){
        int money,k;
        cin>>money>>k;
        cout<<YesNo(money,k,arritems,noOfItems)<<endl;
        testCases--;
    }
    return 0;
}