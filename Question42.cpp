#include <iostream>
using namespace std;

int main() {
	       int i, pow,exp,base;
	       cout<<"\n Pogramme to find power of any number using loop.";
	       cout<<"\n Enter the base number and exponent.";
	       cin>>exp,base;
	       for(i=1;i<=exp;i++)
	       {
	       	   pow*=base;
	       }
	       cout<<"\n The power of"<<base<<"raised to"<<exp<<"is"<<pow;
	return 0;
}
