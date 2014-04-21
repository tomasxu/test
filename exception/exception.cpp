#include <iostream>
#include <stdexcept>
using namespace std;
void CatchIn()
{
    unsigned char ucTemp;
   cin>>ucTemp;
   if(ucTemp > '9' || ucTemp < '0')
   {
       throw invalid_argument("the number you input is invalid\n");
   }
   else
   {
       cout<<ucTemp<<"\n";
   }
   return ;
}
int main()
{
   try
   {
       CatchIn();
   }
   catch(invalid_argument err)
   {
       cout<<err.what();
   }
   return 0;
}
