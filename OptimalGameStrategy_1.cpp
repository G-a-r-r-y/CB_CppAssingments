#include<iostream>
using namespace std;
//yeh recursion ka question hai!!
//Note - Choosing greater choice in each turn doesn't always mean that you would have the maximum sum.

void deleteFirstEle(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}