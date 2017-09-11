#include <iostream>
using namespace std;

int main() {
	int i,num;
	cout<<"\n Enter any number to print all the factors of that number.";
	cin>>num;
	for(i=1;i<num;i++)
	{
	    if(num%1==0)
	    cout<<"\n"<<i;
	}
	cout<<"\n The factors of"<<num<<"are"<<endl;
	return 0;
}
