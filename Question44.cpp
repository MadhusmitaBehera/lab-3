#include <iostream>
using namespace std;

int main() {
	int i;
	long int num=0;
	long int fact=1;
	cout<<"\n Enter any number and print its factorial.";
	cin>>num;
	for(i=1;i<=num;i++)
	{
                fact=fact*i;
	}
	cout<<"\n The factorial of the number is:"<<fact<<endl;
	
	return 0;
}
