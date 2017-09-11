#include <iostream>
using namespace std;

int main() {
	       int no,a=0;
	       cout<<"\n Enter any num=";
	       cin>>no;
	       while(no>0)
	       {
	       	 no=no/10;
	       	 a++;
	       }
	       cout<<"\n Number of digits in given number is="<<a<<endl;
	return 0;
}
