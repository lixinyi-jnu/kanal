#include <iostream>
using namespace std;
int main()
{
    char a[9];
    int b[8][8],c[64],i,z,j,m,n,k,r=0;
    for (i=0;i<8;i++)
        cin>>a[i];
    for(i=0;i<8;i++)
    {
        if(a[i]!='*')
        {
            k=a[i]-48;
            for(j=0;j<8;j++)
                b[i][j]=1;
            for(z=0;z<8;z++)
                b[z][k-1]=1;
            for(m=i+1,n=k-2;m<=7&&n>=0;m++,n--)
                b[m][n]=1;
            for(m=i+1,n=k;m<=7&&n<=7;m++,n++)
                b[m][n]=1;
            for(m=i-1,n=k-2;m>=0&&n>=0;m--,n--)
                b[m][n]=1;
            for(m=i-1,n=k;m>=0&&n<=7;m--,n++)
                b[m][n]=1;
        }
        else
            continue;
    }
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
            c[r++]=b[i][j];
    for(i=0;i<64;i++)
        if(c[i]==0)
            break;
    if(i>=64)
        cout<<"No Answer";
    else
        cout<<(i%8)+1;
        
}

