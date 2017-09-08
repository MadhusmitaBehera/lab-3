#include <iostream>
using namespace std;

int main() {
	             int week; cout<<"Enter week number(1-7)."; cin>>week;

       if(week==1)
         cout<<"\n It is Monday.";
       else if(week==2)
         cout<<"\n It is Tuesday.";
       else if(week==3)
         cout<<"\n It is Wednesday.";
       else if(week==4)
         cout<<"\n It is Thursday.";
       else if(week==5)
         cout<<"\n It is Friday.";
       else if(week==6)
       	 cout<<"\n It is Saturday.";
       else if(week==7)
      	 cout<<"\n It is Sunday.";
       else 
         cout<<"\n Invalid input ! Please enter week number between 1-7 ";
     
	return 0;
}
