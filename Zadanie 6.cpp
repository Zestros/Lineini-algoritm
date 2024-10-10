#include <bits/stdc++.h>

using namespace std;

int main()
{double a, r;
int n;
    cout<<"White a r"<<endl;
    cin >>a>>r;
    n = int(((a/2)/r) - sqrt(3) + 1);
    int c = int((n*(n+1))/2);
    cout <<c<< endl;
    return 0;
}
