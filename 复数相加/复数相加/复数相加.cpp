/* 【问题描述】请编写一个函数，实现两个复数相减。并编写main函数调用该函数。
【输入形式】输入包括4个浮点数，分别是第一个数的实部和虚部，以及第二个数的部和虚部，每个数字之间有一个空格
【输出形式】两个数，分别是差的实部和虚部，保留2位小数，中间用1个空格空开*/
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

