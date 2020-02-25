#include <iostream>
#include <cmath>
using namespace std;
float isprime(unsigned short a)
{
    int k,i,m;
    k=sqrt(a);
    for(i=2;i<=k;i++)
    {
        m=a%i;
        if(m==0)
            break;
    }
    if(i>k)
        return 1;
    else
        return 0;
}

int main()
{
    unsigned short a;
    cin>>a;
    if(isprime(a))
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
}
