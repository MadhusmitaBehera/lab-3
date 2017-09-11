#include <iostream>
using namespace std;

int main() {
           int num,n,digit,rev;
           cout<<"\n Enter a positive number.";
           cin>>num;
           n=num;
           do
           {
           	  digit=num%10;
           	  rev=(rev*10)+digit;
           	  num=num/10;
           }while (num!=0);
           cout<<"\n The reverse of the number is:"<<rev<<endl;
           if(n==rev)
             cout<<"\n The number is palindrome.";
           else
             cout<<"\n The number is not a palindrome."<<endl;
         
	return 0;
}
