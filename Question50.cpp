#include <iostream>
using namespace std;

int main() {
           int num=0,count=0;
           cout<<"\n Programme to enter any number and find its prime factor.";
           cin>>num;
           for(int j=2;j<=num;j++)
           {
           	if(num%j==0)
           	{
           	 count=0;
           	 for(int i=2;i<j;i++)
           	 {
           	  if(j%i==0)
           	  count++;
           	 }
           	 if(count==0)
           	 cout<<"\n The prime factors are:"<<endl;
           	 }
           }
	return 0;
}
