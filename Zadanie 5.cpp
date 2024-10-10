#include <iostream>

using namespace std;

int main()
{int h,m,s;
cout << "white: hours minute second" << endl;
cin>>h>>m>>s;
int hm = h;
int hm1 = m + (s+30)/60;
int hh = h + (hm1+30)/60;
cout<<"hours and minute: "<<hm<<" "<<hm1<<" hours: "<<hh;

    return 0;
}
