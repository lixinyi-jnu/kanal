/*【问题描述】从键盘输入两组英文字符（包括大写和小写英文字符），每组英文字母中都没有重复字母，分别转化为小写字符并存入两个数组a和b中，以英文字母表为依据，请输出a数组和b数组中在英文字母表中最接近的两个英文字母的距离。
【输入形式】输入包括两行英文字母，有大写和小写字母，每行不超过10个元素
【输出形式】输出一个整数，表示两个数组中最接近的两个英文字母的距离，如果两个字母相同，则输出为0*/
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

