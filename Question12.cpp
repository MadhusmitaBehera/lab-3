#include <iostream>
using namespace std;

int main() {
	             int month;
                 cout<<"Enter month number(1-12).";
                 cin>>month;
                 if(month==1)
                     cout<<"\n 31 days.";
                 else if (month==2) 
                      cout<<"\n 28 or 29 days."; 
                 else if (month==3)
                       cout<<"\n 31 days.";
                 else if(month==4) 
                       cout<<"\n 30 days."; 
                 else if(month==5)
                       cout<<"\n 31 days."; 
                 else if(month==6)
                        cout<<"\n 30 days.";
                 else if (month==7)
                          cout<<"\n 31 days.";
                 else if (month==8) 
                          cout<<"\n 31 days.";
                 else if (month==9) 
                          cout<<"\n 30 days."; 
                 else if (month==10) 
                          cout<<"\n 31 days."; 
                 else if (month==11) 
                          cout<<"\n 30 days."; 
                 else if (month==12) 
                          cout<<"\n 31 days."; 
                 else 
                          cout<<"\n Invalid input ! Enter number between 1-12."<<endl;

     
	return 0;
}
