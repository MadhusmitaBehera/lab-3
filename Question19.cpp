#include <iostream>

using namespace std;

int main() {
           int s1,s2,s3,s4,s5,sum,total=500;
           float per;
           cout<<"\n Enter the marks of subjects.";
           cin>>s1,s2,s3,s4,s5;
           sum=s1+s2+s3+s4+s5;
           cout<<"\n The sum is="<<sum<<endl;
           per=(sum*100)/total;
           cout<<"\n The pecentage is="<<per<<endl;
           
           
                    
    

    return 0;
}
