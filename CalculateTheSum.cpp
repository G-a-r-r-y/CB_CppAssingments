#include<iostream>
#include<cmath>
using namespace std;


int main(){
    
    //Making an array - 
    long long int noOfEle;
    cin>>noOfEle;
    long long int arr[noOfEle];
    for(long long int i=0;i<noOfEle;i++){
        cin>>arr[i];
    }

    //Main Code (Roation Part) - 
    long long int noOfrotations,rotationBy;
    cin>>noOfrotations;
    for(long long int j=0;j<noOfrotations;j++){
        
        //Making a Duplicate array - 
        long long int duplicateArr[noOfEle];
        for(long long int i=0;i<noOfEle;i++){
            duplicateArr[i]=arr[i];
        }

        cin>>rotationBy;
        for(long long int k=0;k<noOfEle;k++){
            if(k-rotationBy<0){
               //cout<<"index = "<<k<<", Element ="<<duplicateArr[k]<<", Required index = "<<noOfEle+(k-rotationBy)<<", Element to be added = "<<duplicateArr[noOfEle+(k-rotationBy)]<<endl; 
               arr[k]=duplicateArr[k]+duplicateArr[noOfEle+(k-rotationBy)];  
            }else{
               //cout<<"index = "<<k<<", Element ="<<duplicateArr[k]<<", Required index = "<<k-rotationBy<<", Element to be added = "<<duplicateArr[k-rotationBy]<<endl; 
               arr[k]=duplicateArr[k]+duplicateArr[k-rotationBy];
            }    
        }

        //Printing the array - 
        // for(long long int i=0;i<noOfEle;i++){
        // cout<<arr[i]<<" ";
        // }
    }


    //Calculating Sum - 
    long long int sum=0;
    for(long long int i=0;i<noOfEle;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}