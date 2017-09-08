#include <iostream>
using namespace std;

int main() {
	             char ch;
                 cout<<"\n Enter a character.";
                 cin>>ch;
                 if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
                    cout<<"\n Character is a alphabet."<<endl;
                 else
                    cout<<"\n Character is not a alphabet."<<endl; 
	return 0;
}
