/*【问题描述】1瓶水需要1元，用2个空瓶可以换1瓶水，3瓶盖也可以换1瓶水。小明现在有20元，请问最终可以买到多少瓶水？请使用递归实现。

【输入形式】输入为一个整数，表示小明现在有多少元钱。
【输出形式】输出为一个整数，表示小明最终买到的水的瓶数。*/
#include <iostream>
using namespace std;
void fun(int m,int b,int g,int s)
{
    if(m==0&&b<2&&g<3)
        cout<<s<<endl;
    else
    {
        if (m>0)
        {
            m--;
            b++;
            g++;
            s++;
        }
        if(b>=2)
        {
            b=b-1;
            g++;
            s++;
        }
        if(g>=3)
        {
            g=g-2;
            b++;
            s++;
        }
        fun(m,b,g,s);
    }
}
int main()
{
    int m;
    int b = 0 ,g = 0,s = 0;
    cin>>m;
    fun(m,b,g,s);
}

