#include<iostream>
using namespace std;

//Approach 1 (Brute Force) -
//Time Complexity - O(N^2), Space Complexity - O(1)

// int leftMax(int arr[],int j){
//     int max=arr[0];
//     for(int i=0;i<j;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }

// int rightMax(int arr[],int j,int n){
//     int max=arr[j+1];
//     for(int i=j+2;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }

// void bruteForceApproach(int arr[],int n){
//     int left,right;
//     int ans=0;
//     for(int i=0;i<n-1;i++){
//         left=leftMax(arr,i);
//         right=rightMax(arr,i,n);
//         //cout<<arr[i]<<" - "<<left<<" "<<right<<endl;
//         int tempAns=min(left,right)-arr[i];  //Remember this formula
//         if(tempAns>0){                       //This condition is also important
//             ans+=tempAns;
//         }
//     }
//     cout<<ans<<endl;
// }

// -----------------------------------------------------------------------------------------------------

//Approch 2 (With the help of Prefix and Suffix Array)-
//Time Complexity - O(N), Space Complexity - O(2N)

//Ismei hum pehle hi prefix and suffix array bana lete hai jisse baar baar
//left max and right max for each element calculate nhi karna padhta.  

// void prefixSuffixApproach(int arr[],int n){
//     int prefixArr[n];
//     int suffixArr[n];
    
//     int max=arr[0];
//     for(int i=0;i<n;++i){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         prefixArr[i]=max;
//     }

//     max=arr[n-1];
//     for(int i=n-1;i>=0;--i){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         suffixArr[i]=max;
//     }

//     //Printing Prefix array -
//     // for(int i=0;i<n;i++){
//     //     cout<<prefixArr[i]<<" ";
//     // }
//     // cout<<endl;
//     // //Printing Suffix array - 
//     // for(int i=0;i<n;i++){
//     //     cout<<suffixArr[i]<<" ";
//     // }

//     int ans=0;
//     for(int i=0;i<n;i++){
//         int tempAns=min(prefixArr[i],suffixArr[i])-arr[i];
//         if(tempAns>0){
//             ans+=tempAns;
//         }
//     }
//     cout<<ans<<endl;
// }

// -----------------------------------------------------------------------------------------------

//Approach 3 (Most optimal approach) - 

void optimalApproach(int arr[],int n){
    int left=0;
    int right=n-1;
    int ans=0;
    int maxLeft=0;
    int maxRight=0;

    while(left<=right){
        
        if(arr[left]<=arr[right]){
            if(arr[left]>=maxLeft){
                maxLeft=arr[left];
            }else{
                ans+=maxLeft-arr[left];
            }
            left++;
        }

        if(arr[right]<arr[left]){
            if(arr[right]>maxRight){
                maxRight=arr[right];
            }else{
                ans+=maxRight-arr[right];
            }
            right--;
        }
    }

    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //bruteForceApproach(arr,n);
        //prefixSuffixApproach(arr,n);
        optimalApproach(arr,n);
        t--;
    }
    return 0;
}