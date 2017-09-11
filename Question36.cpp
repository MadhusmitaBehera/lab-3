#include <iostream>
using namespace std;

int main() {
           long long num,product;
           cout<<"\n Enter any number to calculate product of digits.";
           cin>>num;
           while(num !=0)
           {
           	 product*=num/10;
           	 num/=10;
           }
           cout<<"\n Product of digits:"<<product<<endl;
         
	return 0;
}
