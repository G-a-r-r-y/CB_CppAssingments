#include<iostream>
using namespace std;

void func1(){
    long long int N;
    cin>>N;
    long long int price[N];
    for(long long int i=0;i<N;i++){
        cin>>price[i];
    }    

    long long int M;
    cin>>M;

    long long diff=INT_MAX;
    long long int price1;
    long long int price2;
    for(long long int i=0;i<N;i++){
        for(long long int j=0;j<N;j++){
            
            //Setting new values of price1 and price2 -
            // cout<<"Initial Value - "<<endl;
            // cout<<"i - "<<price[i]<<" j - "<<price[j]<<endl;
            if(price[i]>=price[j]){
                if(price[i]+price[j]==M and diff>=price[i]-price[j]){
                price1=price[i];
                price2=price[j];
                diff=price1-price2;
                }
            }else{
                if(price[i]+price[j]==M and diff>price[j]-price[i]){
                price1=price[i];
                price2=price[j];
                diff=price2-price1;
                }
            }
            // cout<<"Final Value - "<<endl;
            // cout<<"price1 - "<<price1<<" price2 - "<<price2<<endl<<endl<<endl;
        } 
    }
    if(price1>=price2){
        cout<<"Deepak should buy roses whose prices are "<<price2<<" and "<<price1<<".";
    }else{
        cout<<"Deepak should buy roses whose prices are "<<price1<<" and "<<price2<<".";
    }
    
}

int main(){
    int T;
    cin>>T;
    while(T>0){
        func1();
        cout<<endl;
        T--;
    }
    return 0;
}