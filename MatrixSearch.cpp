#include<iostream>
using namespace std;

int main(){

    //Making a User defined Matrix - 
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //Printing Matrix - 
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }

    //Finding Element - 
    int ele;
    cin>>ele;
    int elefound=0;
    
    int i=0;
    int j=col;
    while(i<row && j>=0){
        if(ele==arr[i][j]){
            elefound=1;
            break;
        }else if(ele<arr[i][j]){
            j--;
        }else{
            i++;
        }
    }
    cout<<elefound;
    return 0;
}