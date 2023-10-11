#include<iostream>
using namespace std;

int func1(string str,int k){
    int countmaxa,countmaxb;
    for(int i=0;i<str.length();i++){
        int count=0;
        if(str[i]=='a'){
            for(int j=i;j<str.length();j++){
                if (str[j]=='a'){
                    count++;
                }else if (k>0){
                    count++;
                    k--;    
                }
            }
            if(count>countmaxa){
                countmaxa=count;
            }
        }

        else{
            for(int j=i;j<str.length();j++){
                if (str[j]=='b'){
                    count++;
                }else if (k>0){
                    count++;
                    k--;    
                }
            }
            if(count>countmaxa){
                countmaxa=count;
            }
        }
    }

    if(countmaxa>countmaxb){
        return countmaxa;
    }else{
        return countmaxb;
    }
}

int main(){
    int k;
    cin>>k;
    string str;
    cin>>str;
    int num1=func1(str,k);

    for(int i=0;i<str.length()/2;i++){
        swap(str[i],str[str.length()-1]);
    }

    int num2=func1(str,k);
    if(num1>num2){
        cout<<num1;
    }else{
        cout<<num2;
    }
    return 0;
}