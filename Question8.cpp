#include <iostream>
using namespace std;

int main() {
	             char c;
                 cout<<"\n Enter a character.";
                 cin>>c;
                 if((c=='a'|c=='e'|c=='i'|c=='o'|c=='u')||(c=='A'|c=='E'|c=='I'|c=='O'|c=='U'))
                    cout<<"\n Character is a vowel."<<endl;
                 else
                     cout<<"\n Character is a consonant."<<endl;
	return 0;
}
