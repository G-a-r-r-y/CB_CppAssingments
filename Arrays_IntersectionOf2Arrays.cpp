#include<iostream>
using namespace std;

void sort(long long int arr[],long long int n){
    for(long long int i=0;i<n-1;i++){
        bool swappedOnce=false;
        for(long long int j=0 ;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swappedOnce=true;
            }
        }
        if (swappedOnce==false){
            break;
        }
    }
}

bool elepresent(long long int arr3[], long long int ele, long long int n){
    for(long long int i=0;i<n;i++){
        if(arr3[i]==ele){
            return true;
        }
    }
    return false;
}

int main(){

    //Making 2 arrays of same size - 
    long long int n;
    cin>>n;
    long long int arr1[n];
    long long int arr2[n];
    for(long long int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(long long int i=0;i<n;i++){
        cin>>arr2[i];
    }

    //Printing both arrays after sorting - 
    // for(long long int i=0;i<n;i++){
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;
    // for(long long int i=0;i<n;i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;

    //Making 3rd array for output - 
    long long int arr3[n];
    long long int noOfEleinArr3=0;

    for(long long int i=0;i<n;i++){
        long long int countelearr1=0;
        long long int countelearr2=0;
        for(long long int j=0;j<n;j++){
            if(arr1[i]==arr1[j]){
                countelearr1++;
            }
            if(arr1[i]==arr2[j]){
                countelearr2++;
            }
        }
        //cout<<"Element - "<<arr1[i]<<" Countelearr1 = ";
        //cout<<countelearr1<<" Countelearr2 = "<<countelearr2<<endl;
        if(countelearr1<=countelearr2 and elepresent(arr3,arr1[i],noOfEleinArr3)==false){
            //cout<<"Here 1 - "<<arr1[i]<<endl;
            for(long long int k=0;k<countelearr1;k++){
                arr3[noOfEleinArr3+k]=arr1[i];
            }
            noOfEleinArr3+=countelearr1;
        }else if(countelearr1>countelearr2 and elepresent(arr3,arr1[i],noOfEleinArr3)==false){
            //cout<<"Here 2 - "<<arr1[i]<<endl;
            for(long long int k=0;k<countelearr2;k++){
                arr3[noOfEleinArr3+k]=arr1[i];
            }
            noOfEleinArr3+=countelearr2;
        }

    }
    
    //Printing arr3 - 
    // for(long long int i=0;i<n;i++){
    //     cout<<arr3[i]<<" ";
    // }
    // cout<<endl;

    if(noOfEleinArr3>0){
        cout<<"[";
        for(long long int i=0;i<noOfEleinArr3-1;i++){
            cout<<arr3[i]<<", ";
        }
        cout<<arr3[noOfEleinArr3-1]<<"]";
    }

    return 0;
}