#include <iostream>
using namespace std;

int main() {
	            int side1,side2,side3;
                cout<<"\n Enter sides of a triangle.";
                cin>>side1,side2,side3;
                if((side1==side2) && (side2==side3))
                  cout<<"\n Triangle is equilateral.";
                else if((side1==side2) || (side2==side3) || (side3==side1))
                  cout<<"\n Triangle is isoseles.";
                else
                  cout<<"\n Triangle is scalene."<<endl;

     
	return 0;
}
