#include <iostream>
using namespace std;

int main() {
	long int num1,num2,lim,HCF=1;
	cout<<"\n Enter any number to find its HCF.";
	cin>>num1,num2;
	if(num1>num2)
	   lim=num2;
	else if(num2>num1)
	   lim=num2;
	else
	   lim=num1;
	for(int i=1;i<=lim;i++)
	{
                 if(num1%i==0 && num2%i==0)
                 HCF=i;
	}
	cout<<"\n The HCF of num1 and num2 is:"<<HCF<<endl;
	
	return 0;
}
