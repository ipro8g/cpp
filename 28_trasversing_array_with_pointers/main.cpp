#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;


int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    const int siz = 3;
    short a[siz] = {22,33,44};

    cout << "a = " << a << endl;
    cout << "sizeof(short) = " << sizeof(short) << endl;

    short* en = a + siz;
    short sum = 0;

    for(short* p = a; p < en; p++){
        sum += *p;
        cout << "\t p = " << p << "\t p = " << *p << "\t sum = " << sum << endl;
    }
    cout << "end = " << en << endl;

    return 0;
}
