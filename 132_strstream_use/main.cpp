#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <strstream>

using namespace std;

const double pi = 3.141592654;

int main(){
    const int size = 80;
    char inbuf[size] = "Hi Universe 3.14159 65535 Q";
    char outbuf[size];
    istrstream istr(inbuf, size);
    ostrstream ostr(outbuf, size);
    char s1[size], s2[size];
    float x;
    long int n;
    char c, p = '|';
    istr >> s1 >> s2 >> x >> n >> c;
    cout << "\ts1 = [" << s1 << "]\n";
    cout << "\ts2 = [" << s2 << "]\n";
    cout << "\tx = [" << x << "]\n";
    cout << "\tn = [" << n << "]\n";
    cout << "\tc = [" << c << "]\n";
    ostr << s1 << p << s2 << p << x << p << n << p << c << ends;
    cout << "[" << outbuf << "]\n";

    return 0;
}
