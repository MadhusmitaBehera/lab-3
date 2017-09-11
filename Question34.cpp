#include <iostream>
#include <math.h>
using namespace std;

int main() {
           int num,swappednum;
           int firstdigit,lastdigit,digits;
           cout<<"\n Enter any number.";
           cin>>num;
           lastdigit=num%10;
           digits=(int)log10(num);
           firstdigit=(int)(num/pow(10,digits));
           
           swappednum  =lastdigit;
           swappednum *=(int)(pow(10,digits));
           swappednum +=num%(int)(pow(10,digits));
           swappednum -=lastdigit;
           swappednum +=firstdigit;
           
           cout<<"\n Original number:"<<num<<endl;
           cout<<"\n Number after swapping first and last digit is:"<<swappednum<<endl;
           
           
           
	return 0;
}
