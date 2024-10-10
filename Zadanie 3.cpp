#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double k, s,p;
    cout << "Write k, p, s" << endl;
    cin >> k >> p >> s;
    double z = (1 + (p / 100));
    double sk = s / k;
    double answer = (log(sk) / log(z));
    int answer1 = int(answer / 12);
    int answer2 = int(answer) % 12;
    cout <<"Years "<< answer1<<" month "<<answer2;
    return 0;
}
