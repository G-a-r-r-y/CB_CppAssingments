// Question - 
// Take as input N, the size of array. Take N more inputs and store that in an array. 
// Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array
// and -1 if M is not found anywhere. Print the value returned.

#include<iostream>
using namespace std;

int lastIndex(int arr[],int num,int i){
    //Base Case - 
    if(i==-1){
        return -1;
    }

    //Recursive Case - 
    if(num==arr[i]){
        return i;
    }        
    return lastIndex(arr,num,i-1); 
}
s
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    cout<<lastIndex(arr,m,n-1);
    return 0;
}