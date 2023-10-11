#include<iostream>
using namespace std;

//Note in this question, it is not necessary ki common elements ka same index ho
int maxSum(int arr1[],int arr2[],int n,int m){
    int sum1=0;
    int sum2=0;
    int result=0;
    int i=0;
    int j=0;
    while(i<n and j<m ){
        if(arr1[i]<arr2[j]){
            sum1+=arr1[i];
            i++;
        }else if(arr1[i]>arr2[j]){
            sum2+=arr2[j];
            j++;
        }else{  
            result+=max(sum1,sum2);
            sum1=0;sum2=0;
            while(arr1[i]==arr2[j] and i<n and j<m){  //This statement is for continues common elements.
                result+=arr1[i]; 
                i++;j++;
            }

        }
    }

    while(i<n){
        sum1+=arr1[i];
        i++;
    }
    while(j<m){
        sum2+=arr2[j];
        j++;
    }

    result+=max(sum1,sum2);
    return result;
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        //Making 2 user defined sorted arrays - 
        int n,m;
        cin>>n>>m;
        int arr1[n];
        int arr2[m];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
        cout<<maxSum(arr1,arr2,n,m);
        t--;
        cout<<endl;
    }
    
    return 0;
}