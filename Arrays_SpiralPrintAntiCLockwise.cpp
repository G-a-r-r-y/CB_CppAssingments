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

        for(int i=sr;i<=er;i++){
            cout<<arr[i][sc]<<", ";
        }
        sc++;

        for(int i=sc;i<=ec;i++){
            cout<<arr[er][i]<<", ";
        }
        er--;

        if(sc<=ec){                  //Last ke 2 loops mei conditions aayengi
            for(int i=er;i>=sr;i--){
                cout<<arr[i][ec]<<", ";
            }
            ec--;
        }

        if(sr<=er){
            for(int i=ec;i>=sc;i--){
                cout<<arr[sr][i]<<", ";
            }
            sr++;
        }

    }
    cout<<"END";
    return 0;
}