#include<iostream>
using namespace std;

void mergeTwoSortedArrays(int arr[],int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int tempArr[10000];
    int k=s;


    //Merging - 
    while(i<=mid and j<=e){
        if(arr[i]<arr[j]){
            tempArr[k]=arr[i];
            i++;
            k++;
        }else{
            tempArr[k]=arr[j];
            j++;
            k++;
        }
    }

    //Agar Array 1 mei elements bach gaye toh - 
    while(i<=mid){
        tempArr[k]=arr[i];
        k++;
        i++;
    }

    //Agar Array 2 mei elements bach gaye toh - 
    while(j<=e){
        tempArr[k]=arr[j];
        k++;
        j++;
    }

    //Finally copying tempArr to arr - 
    for(int l=s;l<=e;l++){
        arr[l]=tempArr[l];
    }
    return;
}
void mergeSort(int arr[],int s,int e){
    
    //Base Case - 
    if(s==e){
        return;
    }

    //Recursive Case - 
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    mergeTwoSortedArrays(arr,s,e);
}
int main(){
    //Making a User defined array - 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);

    //Printing the array after performing Merge Sort - 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}