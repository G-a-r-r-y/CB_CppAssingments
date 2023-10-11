#include<iostream>
#include<vector>
using namespace std;

static int count=0;
bool placingQueenPossible(int row,int col,int n,int** arr){
    //Note - 
    // Since hum queen left side se insert kar rhe hai toh
    // humme bas left side of board se check karte aana hai.

    //Checking for same row - 
    for(int i=col;i>=0;i--){
        if(arr[row][i]==1){
            return false;
        }
    }

    //Column ke liye check karne ki zarurat nhi hai cause hum
    //code mei column already apne aap shift karke chal rhe hai.

    //Checking for diagonals - 
    //For upper diagonal - 
    int x=row;
    int y=col;
    while(x>=0 and y>=0){
        if(arr[x][y]==1){
            return false;
        }
        x--;
        y--;
    }

    //For lower diagonal - 
    x=row;
    y=col;
    while(x<n and y>=0){
        if(arr[x][y]==1){
            return false;
        }
        x++;
        y--;
    }

    return true;
    
}

void solveNQueen(int n,int** arr,int col){
    //Base Case - 
    if(col==n){
        //For Printing All Answers - 
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        count++;
        return;
    }


    //Recursive Case - 
    for(int row=0;row<n;row++){
        if(placingQueenPossible(row,col,n,arr)){
            //if placing queen is safe - 
            arr[row][col]=1;
            solveNQueen(n,arr,col+1);
            //Backtracking - 
            arr[row][col]=0;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;        //Assigning 0 to all the indices
        }
    }
    solveNQueen(n,arr,0);
    cout<<count;
    return 0;
}