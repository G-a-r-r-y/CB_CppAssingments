#include<iostream>
using namespace std;

bool func1(int num){
    int arr[]={2,3,5,7,11,13,17,19,23,29};
     for(int i=0;i<10;i++){
        if(num==arr[i]){
            return true;
        }
     }
    return false; 
}

bool func2(int num){
    int arr[]={2,3,5,7,11,13,17,19,23,29};
     for(int i=0;i<10;i++){
        if(num%arr[i]==0){
            return false;
        }
     }
    return true; 
}

int main(){
    int n;
    cin>>n;
    string num1;
    cin>>num1;
    int count=0;
    int i=0;
    while(i<n){
        int j=i+1;
        while(j<=n){
            string num2=num1.substr(i,j);
            int num3=stoi(num2);
            if(num3==0 or num3==1){
                i++;
                break;
            }else if (func1(num3)==true){
                cout<<"HereFunc1  -  "<<num3<<endl;
                count++;
                i=j;
                break;
            }else if (func2(num3)==true){   
                cout<<"HereFunc2  -  "<<num3<<endl;
                count++;
                i=j;
                break;
            }
            j++;
        }
        i++;
        cout<<endl;
    }
    cout<<count;
    return 0;
}