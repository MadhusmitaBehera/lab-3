#include <iostream>
using namespace std;

int main() {
	int num1,num2,num3;
	cout<<"Enter any three numbers.";
	cin>>num1,num2,num3;
	if(num1>num2 & num1>num3)
	 cout<<"\n Maximum is="<<num1<<endl;
	if(num2>num1 & num2>num3)
	 cout<<"\n Maximum is="<<num2<<endl;
	if(num3>num1 & num3>num1)
	 cout<<"\n Maximum is="<<num3<<endl;

	return 0;
}
