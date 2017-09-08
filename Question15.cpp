#include <iostream>
using namespace std;

int main() {
	            int side1,side2,side3;
                cout<<"\n Enter three sides of a triangle.";
                cin>>side1,side2,side3;
                if((side1+side2>side3) || (side2+side3>side1) || (side1+side3>side2))
                   cout<<"\n Triangle is valid."<<endl;
                else
                   cout<<"\n Triangle is not valid."<<endl;

     
	return 0;
}
