#include <iostream>
using namespace std;

void subfun(int *in)
{
    int subval = 9;
    in = &subval;
    *in = 8;
}
int main()
{
    int val=9;
    cout<<val<<"\n";
    int *pval = &val;
    subfun(pval);
    cout<<val;
    return 0;
}
