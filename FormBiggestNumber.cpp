//Use the concept of comparision - 

#include<iostream>
#include<cmath>
using namespace std;


long long int makingNumber(long long int a,long long int b){
    //Calculating Number of digits in b - 
    long long int digits=0;
    long long int temp=b;
    while(temp>0){
        digits++;
        temp=temp/10;
    }
    return (a*pow(10,digits))+b;
}

int main(){
    long long int t,n;
    cin>>t;
    //t for Number of test cases 
    while(t>0){
        //n for Number of elements in a case
        cin>>n;
        //Creating an array of n elements for a case
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }

        //Forming Biggest Number using comparision
        for(long long int i=0;i<n;i++){
            for(long long int j=i+1;j<n;j++){
                //cout<<makingNumber(arr[i],arr[j])<<"  "<<makingNumber(arr[j],arr[i])<<endl;
                if(makingNumber(arr[i],arr[j]<makingNumber(arr[j],arr[i]))){
                    swap(arr[i],arr[j]);
                }
            }
        }

        for(long long int i=0;i<n;i++){
            cout<<arr[i];
        }
        t--;
    }
    return 0;
}