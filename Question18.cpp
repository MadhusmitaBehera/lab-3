#include <iostream>

using namespace std;

int main() {
                 int cp,sp,amt;
                 cout<<"\n Enter cost price=";
                 cin>>cp;
                 cout<<"\n Enter selling price=";
                 cin>>sp;
 
                 if(cp>sp)
                     amt=cp-sp;
                      cout<<"\n Amount is="<<amt<<endl;
                 
                 else if(sp>cp)
                       amt=sp-cp;
                       cout<<"\n Amount is="<<amt<<endl;
                 else 
                       cout<<"\n No profit no loss."<<amt<<endl;
                    
    

    return 0;
}
