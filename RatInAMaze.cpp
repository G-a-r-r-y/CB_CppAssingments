#include<iostream>
using namespace std;

bool isSafeToMove(char** arr,int row,int col,int n,int m){
    if(row<n and col<m and arr[row][col]=='O'){
        return true;
    }
    return false;
}

bool solveMaze(char** arr,int** solArr,int row,int col,int n,int m){
    //Base Case - 
    if(row==n-1 and col==m-1){
        solArr[row][col]=1;
        return true;
    }
    
    //Recursive Case - 
    if(isSafeToMove(arr,row,col,n,m)==true){
        solArr[row][col]=1;
        if(solveMaze(arr,solArr,row,col+1,n,m)==true){
            return true;
        }
        if(solveMaze(arr,solArr,row+1,col,n,m)==true){
            return true;
        }

        //Backtracing -
        solArr[row][col]=0;
        return false;
    }
    return false;
    
}



int main(){
    //Creating a User defined 2D array - 
    int n,m;
    cin>>n>>m;
    char** arr=new char* [n];
    for(int i=0;i<n;i++){
        arr[i]=new char[m];
    }

    //Taking inputs for the 2D array - 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    //Creating an integer type 2D array solArr 
    //And initiallising all indices with value 0 -
    int** solArr=new int* [n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[m];
         for(int j=0;j<m;j++){
            solArr[i][j]=0;
        }
    }
    

    //Checking if a solution is possible or not - 
    if(solveMaze(arr,solArr,0,0,n,m)==true){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<-1;
    }
    
    return 0;
}