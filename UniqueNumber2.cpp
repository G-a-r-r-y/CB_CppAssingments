#include<iostream>
using namespace std;

int main(){

    long long int n;
    cin>>n;
    long long int arr1[n];
    long long int arr2[n];
    for(long long int i=0;i<n;i++){
        cin>>arr1[i];
    }

    //Sorting array(Selection Sort) - 
    for(long long int i=0;i<n-1;i++){
        long long int min=i;
        for(long long int j=i+1;j<n;j++){
            if(arr1[min]>arr1[j]){
                min=j;
            }
        }
        swap(arr1[i],arr1[min]);
    }

    long long int j=0;
    for(long long int i=0;i<n;i++){
        if(i==0 and ((arr1[0]^arr1[1])!=0)){
            arr2[j]=arr1[0];    
            j++;
        }else if(i==n-1 and ((arr1[n-1]^arr1[n-2])!=0)){
            arr2[j]=arr1[n-1];
        }else if(((arr1[i-1]^arr1[i])!=0) and ((arr1[i]^arr1[i+1])!=0)){
            arr2[j]=arr1[i];
            j++;
        }else{
            continue;
        }
    }

    for(long long int i=0;i<=j;i++){
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}