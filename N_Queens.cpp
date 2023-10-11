#include<iostream>
#include<vector>
using namespace std;

class answer{
    public:
    int x;
    int y;
    answer(int a,int b){
        x=a;
        y=b;
    }
};

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

    //cols ke liye check karne ki zarurat nhi hai cause hum
    //code mei cols already apne aap shift karke chal rhe hai.

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

void solveNQueen(int n,int** arr,int col,vector<answer>&v){
    //Base Case - 
    if(col==n){

        //For Printing All Answers(In matrix Form)- 
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;

        //For Printing in {row,col} format - 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1){
                    answer obj(i+1,j+1);
                    v.push_back(obj);
                }
            }
        }
        count++;
        return;
    }


    //Recursive Case - 
    for(int row=0;row<n;row++){
        if(placingQueenPossible(row,col,n,arr)){
            //if placing queen is safe - 
            arr[row][col]=1;
            solveNQueen(n,arr,col+1,v);
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
    vector<answer>v;
    solveNQueen(n,arr,0,v);
    
    vector<answer>::iterator ptr;
    ptr=v.end()-n;

    while(!v.empty()){
        while(ptr!=v.end()){
            cout<<'{'<<ptr->x<<"-"<<ptr->y<<'}'<<" ";
            ptr++;
        }
        cout<<" ";
        v.erase(ptr-n,ptr);
        ptr=v.end()-n;
    }
    cout<<'\n'<<count;
    return 0;
}