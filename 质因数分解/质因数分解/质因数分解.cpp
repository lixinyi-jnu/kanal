#include <iostream>
#include <cmath>
using namespace std;
int isPrime(long num)
{
    int k,i,m;
    k=sqrt(num);
    for(i=2;i<=k;i++)
    {
        m=num%i;
        if(m==0)
            break;
    }
    if(i>k)
        return 1;
    else
        return 0;
} //判断是否为素数
void fun(long n,long a[100],int &k)//引用调用
{
    int s,i=2,j=0;
    k = 0;
    s=isPrime(n);
    if(s==1)   //是素数时返回该数本身
    {
        k=1;
        a[0]=n;
    }
    else
    {
        while(n!=1)
        {
            if(n%i==0)
            {
                a[j++]=i;
                k++;
                n=n/i;
                i=2;
            }
            else
                i++;
        }
    }
    return;
} //质因数分解
int main()
{
    long n;
    long factor[100];
    int numofFactor = 0;
    cin>>n;
    fun(n,factor,numofFactor);
    for(int i =0;i<numofFactor;i++)
    {
        cout <<factor[i]<<' ';
    }
    return 0;
}
