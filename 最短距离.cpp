#include <iostream>
using namespace std;
int main()
{
    char a[11],b[11];
    int i,j,k,s;
    cin>>a;
    cin>>b;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            continue;
        else
            a[i]=a[i]+32;
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>='a'&&b[i]<='z')
            continue;
        else
            b[i]=b[i]+32;
    }
    k=a[0]-b[0];
    if(k<0)
        k=-k;
    for(i=0;a[i]!='\0';i++)
        for(j=0;b[j]!='\0';j++)
    {
        if(i==0&&j==0)
            continue;
        s=a[i]-b[j];
        if(s<0)
            s=-s;
        {
            if(s==k)
            k=0;
            if(s<k)
        {
            s=s^k;
            k=k^s;
            s=s^k;
        }
        }
    }
    cout<<k<<endl;
}

