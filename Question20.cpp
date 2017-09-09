#include <iostream>

using namespace std;

int main() {
           float basic,gross,da,hra;
           cout<<"\n Enter the basic salary of an employee";
           cin>>basic;
           
           if(basic<=10000)
           {
              da=basic*0.8;
              hra=basic*0.2;
           }
           else if(basic<=20000)
           {
              da=basic*0.9;
              hra=basic*0.25;
           }  
           else
           {
              da=basic*0.95;
              hra=basic*0.3;
           }
           gross=basic+da+hra;
           cout<<"\n Gross salary of an employee is="<<gross<<endl;
           
           
                    
    

    return 0;
}
