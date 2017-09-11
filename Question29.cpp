#include <iostream>
using namespace std;

int main() {
	       int i,num,odd_sum;
	       cout<<"\n Enter the value of num.";
	       cin>>num;
	       for(i=1;i<=num;i+=2)
	       {
	       	 odd_sum+=i;
	       }
	       cout<<"\n Sum of odd numbers="<<odd_sum<<endl;
	return 0;
}
