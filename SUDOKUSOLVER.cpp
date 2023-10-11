#include<bits/stdc++.h>
using namespace std;

void printMatrix(int** matrix){
    for(int row=0;row<9;row++){     
        for(int col=0;col<9;col++){
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
    }  
    return;   
}

bool isMatrixFilled(int** matrix){
    for(int row=0;row<9;row++){     
        for(int col=0;col<9;col++){
            if(matrix[row][col]==0){
                return false;
            }
        }
    }
    return true;
}

bool isSafe(int** matrix,int row,int col,int i){
    for(int j=0;j<9;j++){
        //row - 
        if(matrix[row][j]==i){
            return false;
        }

        //col - 
        if(matrix[j][col]==i){
            return false;
        }

        //3X3 Matrix - 
        if(matrix[3*(row/3)+j/3][3*(col/3)+j/3]==i){
            return false;
        }
    }

    return true;
}

bool sudokuSolver(int** matrix){

    //Recursive Case - 
    for(int row=0;row<9;row++){     //2 loops to iterate through the entire matrix
        for(int col=0;col<9;col++){

            if(matrix[row][col]==0){   
                for(int i=1;i<=9;i++){  //Saare elements rakh ke try karne ke liye
                    if(isSafe(matrix,row,col,i)){
                        matrix[row][col]=i;
                        bool aageSolPossibleHai=sudokuSolver(matrix);
                        if(aageSolPossibleHai){
                            return true;
                        }else{
                            //backtrack
                            matrix[row][col]=0;
                        }
                    }
                }
                // agar 1-9 mei se ek bhi element nhi rakh sakte toh solution exist nhi karega.
                return false;    
            }

        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    int** matrix=new int*[9];
    for(int i=0;i<9;i++){
        matrix[i]=new int[9];
        for(int j=0;j<9;j++){
            cin>>matrix[i][j];
        }
    }

    if(sudokuSolver(matrix)){
        cout<<"isMatrixFilled - "<<isMatrixFilled(matrix)<<endl;
        printMatrix(matrix);
    }
    return 0;
}