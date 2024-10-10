#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double r;
    cout << "Write r" << endl;
    cin >> r;
    int g,m,s;
    double grad = (r*180)/(atan(1)*4);
    double grads = grad*3600;
    int gradsint = int(grads);
    int gradm = gradsint/60;
    s=gradsint%60;
    int gradg = gradm/60;
    m=gradm%60;
    g=gradg;
    cout<<"g "<<g<<" m "<<abs(m)<<" s "<<abs(s);
    return 0;
}
