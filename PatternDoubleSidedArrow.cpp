#include<iostream>
using namespace std;

//Problem - Front space print kyu nhi ho rahi?????


int main(){

    int n;
    cin>>n;

    //Upper Half - 
    int j=2;
    int k=1;
    for(int row=1;row<=n/2+1;row++){

        int m=row;
        int q=1;
        //first row - 
        if(row==1){
            //Space - 
            for(int i=0;i<n-1;i++){
                cout<<"  ";
            }

            //Number - 
            cout<<"1";
        }else{

            //Space - 
            for(int i=0;i<(n-1)-j;i++){
                cout<<"  ";
            }
            j+=2;

            //Numbers - 
            for(int i=0;i<row;i++){
                cout<<m<<" ";
                m--;
            }

            //Space - 
            for(int i=0;i<k;i++){
                cout<<"  ";
            }
            k+=2;

            //Numbers - 
            for(int i=0;i<row;i++){
                cout<<q<<" ";
                q++;
            }
        }
        cout<<endl;
    }

    //Lower half - 
    int g=0;
    int h=0;
    int f=0;
    for(int row=1;row<=n/2;row++){

        int r=n/2-(row-1);
        int e=1;
        //Last row - 
        if(row==n/2){
            for(int i=0;i<n-1;i++){
                cout<<"  ";
            }
            
            cout<<"1";
        }else{

            //Space - 
            for(int i=0;i<2*row;i++){
                cout<<"  ";
            }

            //Stars - 
            for(int i=0;i<(n/2)-g;i++){
                cout<<r<<" ";
                r--;
            }
            g++;

            //Space - 
            for(int i=0;i<(k-4)-h;i++){
                cout<<"  ";
            }
            h+=2;

            //Stars - 
            for(int i=0;i<(n/2)-f;i++){
                cout<<e<<" ";
                e++;
            }
            f++;
        }
        cout<<endl;
    }    
    return 0;
}