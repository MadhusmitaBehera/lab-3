#include <iostream>
using namespace std;

int main() {
	             char a;
                 cout<<"\n Enter a character.";
                 cin>>a;
                 if(a>='A'&&a<='Z')
                    cout<<"\n Character is a uppercase character."<<endl;
                 else if(a>='a'&&a<='z')
                    cout<<"\n Character is a lowercase character."<<endl;
                 else
                     cout<<"\n Invalid input!!!"<<endl;
	return 0;
}
