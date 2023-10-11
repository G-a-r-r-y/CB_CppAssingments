#include<iostream>
using namespace std;
int main() {
    char ch;
	cout<<"Enter character - ";
    cin>>ch;
	if(ch>=65 and ch<=90){
		cout<<"UPPERCASE";
	}else if(ch>=97 and ch<=112){
	    cout<<"LOWERCASE";
	}else{
		cout<<"Invalid";
	}
	return 0;
}