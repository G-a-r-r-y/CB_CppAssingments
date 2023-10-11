#include<iostream>
using namespace std;
int main() {
	int num;
	cin>>num;      // 1 
	int sum=num;   // 1
    while(sum>=0){  // yes yes yes  no
       cout<<num<<endl;  // 1   2   88
	   cin>>num;   // 2   88  -100
	   sum+=num;   // 3   91   -9
	}
	return 0;
}