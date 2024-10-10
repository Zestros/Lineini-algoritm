#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double g, s,m;
    cout << "Write g, m, s" << endl;
    cin >> g >> m >> s;
    double summ=sqrt(g*g)+m/60 + s/3600;
    double rad=(summ/180)*(atan(1)*4);
    double sign = g/sqrt(g*g);
    rad= sign*rad;
    cout<<rad;
    return 0;
}
