#include<iostream>
using namespace std;

int main(){
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        if(s<=k){
            cout<<"No";
            return 0;
        }
        for(int j=0;j<m;j++){
            if(arr[i][j]=='.' and j==(m-1)){
                s-=2;
            }else if (arr[i][j]=='.'){
                s--;
                s-=2;
            }else if (arr[i][j]=='*'){
                s--;
                s+=5;
            }else if(arr[i][j]=='#'){
                break;
            }      
        }
    }
    cout<<"Yes"<<endl<<s;
    return 0;
}