#include <iostream>
using namespace std;
class CBase
{
public:
       CBase(){cout<<"constructing CBase class"<<endl;}
       ~CBase(){cout<<"destructing CBase class"<<endl;}
};
class CSub : public CBase
{
public:
       CSub(){cout<<"constructing CSub class"<<endl;}
       ~CSub(){cout<<"destructing CSub class"<<endl;}
};
int main()
{
   CSub obj;
   return 0;
}
