#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //Upper half - 
    int j=1;
    for(int row=1;row<=n;row++){

        int x=n,y=n-(row-1);
        //stars(before space) - 
        for(int i=0;i<row;i++){
            cout<<x<<" ";
            x--;
        }

        //space - 
        for(int i=0;i<2*n-j;i++){
            cout<<"  ";
        }

        //stars(after space) - 
        for(int i=0;i<row;i++){
            cout<<y<<" ";
            y++;
        }
        j+=2;
        cout<<endl;
    }

    //Middle line - 
    for(int i=n;i>=0;i--){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    

    //Lower Half - 
    for(int row=1;row<=n;row++){

        int x=n;
        int y=row;
        //stars(before space )-
        for(int i=0;i<n-(row-1);i++){
            cout<<x<<" ";
            x--;
        }

        //space - 
        for(int i=0;i<2*row-1;i++){
            cout<<"  ";
        } 

        //stars(after space )-
        for(int i=0;i<n-(row-1);i++){
            cout<<y<<" ";
            y++;
        }
        cout<<endl;
    }
    return 0;

}