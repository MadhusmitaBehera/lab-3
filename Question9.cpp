#include <iostream>
using namespace std;

int main() {
	             char a;
                 cout<<"\n Enter a character.";
                 cin>>a;
                 if((a>='A'|a<='Z')||(a>='a'|a<='z'))
                    cout<<"\n Character is a alphabet."<<endl;
                 else if(a>='0'|a<='9')
                    cout<<"\n Character is a digit."<<endl;
                 else
                    cout<<"\n Character is a special character."<<endl;
	return 0;
}
