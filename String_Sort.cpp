#include<iostream>
using namespace std;

bool subString(string sub,string super){
    for(int i=0;i<sub.length();i++){
        if(sub[i]==super[i]){
            continue;
        }
        return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //Bubble Sort
    for(int i=0;i<n-1;i++){
        bool swapOnce=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapOnce=true;
            }
        }
        if(swapOnce==false){
            break;
        }
    }

    for(int i=0;i<n-1;i++){
        if(subString(arr[i],arr[i+1])==true){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}