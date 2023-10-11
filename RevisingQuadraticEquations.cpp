#include<iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	if((b*b-4*a*c)>0){
       cout<<"Real and Distinct"<<endl;
	   cout<<(-b-sqrt(b*b-4*a*c))/2*a<<" "<<(-b+sqrt(b*b-4*a*c))/2*a;
	}else if ((b*b-4*a*c)==0){
	   cout<<"Real and Equal"<<endl;
	   cout<<(-b-sqrt(b*b-4*a*c))/2*a<<" "<<(-b+sqrt(b*b-4*a*c))/2*a;
	}else{
        cout<<"Imaginary";
    }
    
	return 0;
}