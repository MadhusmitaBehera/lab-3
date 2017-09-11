#include <iostream>
using namespace std;

int main() {
           int num,reversednum,remainder;
           cout<<"\n Enter an integer.";
           cin>>num;
           while(num!=0)
           {
           	  remainder=num%10;
           	  reversednum=reversednum*10+remainder;
           	  num/=10;
           }
           cout<<"\n Reversed number is:"<<reversednum<<endl;
         
	return 0;
}
