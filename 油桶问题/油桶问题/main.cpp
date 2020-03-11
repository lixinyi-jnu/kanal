#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double PI=3.1415926;

class cylinder
{
public:
    void init(double a,double b)
    {
        h = a;
        r = b;
    }
    double getvolumn()
    {
        double v;
        v = PI*r*r*h;
        return v;
    }
    double getarea()
    {
        double s;
        s = 2*PI*r*r+2*PI*r*h;
        return s;
    }
private:
    double r,h;
};
int main()
{
    double d,h;
    cin>>d>>h;
    cylinder can;
    can.init(h,d/2);
    cout<<fixed<<setprecision(6);
    cout<<"油桶的体积是"<<can.getvolumn()<<" "<<endl;
    cout<<"铁皮的面积是"<<can.getarea()<<endl;
}
