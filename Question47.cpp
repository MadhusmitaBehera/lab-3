#include <iostream>
using namespace std;

int main() {
           int n,i;
           bool isPrime = true;
           cout<<"\n Enter a positive integer.";
           cin>>n;
           for(i=2;i<=n/2;i++)
           {
           	 if(n%i==0)
           	 {
           	   isPrime=false;
           	   break;
           	 }
           }
           if(isPrime)
             cout<<"\n This is a prime number."<<endl;
           else
             cout<<"\n This is not a prime number."<<endl;
	return 0;
}
