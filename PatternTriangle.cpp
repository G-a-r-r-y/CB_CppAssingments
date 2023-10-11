#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){

        //Printing front spaces - 
        for(int i=0;i<n-row;i++){
            cout<<" "<<"\t";
        }

        //Printing front number till mid -  
        for(int j=0;j<row;j++){
            cout<<row+j<<"\t";
        }

        //Printing remaining numbers - 
        
        for(int k=row-2;k>=0;k--){
            cout<<row+k<<"\t";
        }
        cout<<endl;
    }
    return 0;
}