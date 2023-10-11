#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cin>>num1;
	cin>>num2;
	int div;
	if(num1>num2){
		for(int i=2;i<=num2;i++){
			if(num1%i==0 && num2%i==0){
				div=i;
			}
		}
	}else if(num2>num1){
		for(int i=2;i<=num1;i++){
			if(num1%i==0 && num2%i==0){
				div=i;
			}
		}
	}else{
		for(int i=2;i<=num1;i++){
			if(num1%i==0 && num2%i==0){
				div=i;
			}
		}
	}
	cout<<div;
	return 0;
}