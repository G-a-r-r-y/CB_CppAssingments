#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }
    

    int sr=0;       //Starting row
    int sc=0;
    int er=row-1;  //ending wow
    int ec=col-1;
    while(sr<=er and sc<=ec){      //Important condition

        for(int i=sc;i<=ec;i++){
            cout<<arr[sr][i]<<", ";
        }
        sr++;                    //Starting ki row print kardi isliye sr++

        for(int i=sr;i<=er;i++){
            cout<<arr[i][ec]<<", ";
        }
        ec--;                   //End ka column print kardiya isliye ec--;

        if(sr<=er){              //Last ke 2 loops mei hi yeh if wali condition aayegi
            for(int i=ec;i>=sc;i--){
            cout<<arr[er][i]<<", ";
            }
            er--;
        }        
        
        if(sc<=ec){
            for(int i=er;i>=sr;i--){
            cout<<arr[i][sc]<<", ";
            }
            sc++;
        }
    }
    cout<<"END";
    return 0;
}