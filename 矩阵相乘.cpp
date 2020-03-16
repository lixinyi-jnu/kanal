#include <iostream>
using namespace std;
int main()
{
    int a[9],b[9],c[9];
    int i,j;
    for(i=0;i<9;i++)
        cin>>a[i];
    for(j=0;j<9;j++)
        cin>>b[j];
    for(i=0;i<3;i++)
        c[i]=a[0]*b[i]+a[1]*b[i+3]+a[2]*b[i+6];
    for(i=3,j=0;i<6;i++,j++)
        c[i]=a[3]*b[j]+a[4]*b[j+3]+a[5]*b[j+6];
    for(i=6,j=0;i<9;i++,j++)
        c[i]=a[6]*b[j]+a[7]*b[j+3]+a[8]*b[j+6];
    for(i=0;i<9;i++)
    {
        cout<<c[i]<<' ';
        if(i==2||i==5)
            cout<<"\n";
    }
}
