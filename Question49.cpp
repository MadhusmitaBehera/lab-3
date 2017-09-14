#include <iostream>
using namespace std;

int main() {
           int i,j,end,isPrime,sum=0;
           cout<<"\n Find sum of all prime numbers between 1 to :";
           cin>>end;
           for(i=2;i<=end;i++)
           {
           	isPrime=1;
           	for(j=2;j<=i/2;j++)
           	{
           	 if(i%j==0)
           	 {
           	  isPrime=0;
           	  break;
           	 }
           	}
           	if(isPrime=1)
           	{
           	 sum+=i;
           	}
           }
           cout<<"\n Sum of all prime numbers is="<<end<<sum<<endl;
	return 0;
}
