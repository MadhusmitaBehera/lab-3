#include <iostream>
using namespace std;

int main() {
	int num;
	cout<<"\n Enter any number.";
	cin>>num;
	if(num%5==0 & num%11==0)
	 cout<<"\n Number is divisible by 5 and 11."<<endl;
	else
	 cout<<"\n Number is not divisible by 5 and 11."<<endl;

	return 0;
}
