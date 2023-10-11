#include<iostream>
using namespace std;

int multiply(int arr[],int i,int sizeArr){

    int carry=0;
    for(int j=0;j<sizeArr;j++){
        int prod=arr[j]*i+carry;
        arr[j]=prod%10;
        carry=prod/10;
    }
    while(carry){    //this look is incase carry is greater than a 1 digit number - 
        arr[sizeArr]=carry%10;
        carry=carry/10;
        sizeArr++;
    }
    return sizeArr;
}

int main(){
    int num;
    cin>>num;
    int arr[1000];
    arr[0]=1;
    int sizeArr=1;

    for(int i=2;i<=num;i++){
        sizeArr=multiply(arr,i,sizeArr);
    }

    //Printing the number - 
    //Should be printed in reverse order cause humne store bhi reverse order mei kiya tha -     
    for(int i=sizeArr-1;i>=0;i--){
        cout<<arr[i];
    }
}