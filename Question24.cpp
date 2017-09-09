#include <iostream>

using namespace std;

int main() {
           int character;
           char ch='A';
           do
           { 
           	  character=int(ch);
           	  cout<<"\n ch";
           	  character++;
           	  ch=char(character);
           	  
           }
           while(ch<='Z');
           
           	  
                    
    

    return 0;
}
