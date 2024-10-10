#include <iostream>

using namespace std;

int main()
{int a,b,c;
    cout << "Vvedi constanti" << endl;
    cin>>a>>b>>c;
double x0 = (-1*b)/(2*a);
double y0 = a*x0*x0 + b*x0 + c;
cout<<"Coordinati vershini :"<<x0<<" "<<y0;
    return 0;
}
