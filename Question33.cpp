#include <iostream>
using namespace std;

int main() {
           int num,sum,firstdigit,lastdigit;
           cout<<"\n Enter any number to find the sum of first and last digit .";
           cin>>num;
           lastdigit=num%10;
           firstdigit=num;
           while(num>10)
           {
           	  num=num/10; 
           }
           firstdigit=num;
           sum=firstdigit+lastdigit;
           cout<<"\n The sum of first and last digit is:"<<sum<<endl;
           
           
	return 0;
}
