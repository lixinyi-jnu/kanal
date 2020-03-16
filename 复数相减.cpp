#include <iostream>
#include <iomanip>
using namespace std;
float jianfa(float *a,float *b)
{
    float k;
    k=*a-*b;
    return k;
}
int main()
{
    float a1,a2,b1,b2;
    float p1,p2;
    cin>>a1>>a2>>b1>>b2;
    p1=jianfa(&a1,&b1);
    p2=jianfa(&a2,&b2);
    cout<<fixed<<setprecision(2)<<p1<<' '<<p2;
}

