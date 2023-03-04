#include <iostream>
#include <limits.h>
using namespace std;
// Prints the constants stored in 1imits.h:

int main(){
    cout << "minimum char = " << CHAR_MIN << endl;
    cout << "maximum char = " << CHAR_MAX << endl;
    cout << "minimum short = " << SHRT_MIN << endl;
    cout << "maximum short = " << SHRT_MAX << endl;
    cout << "minimum int = " << INT_MIN << endl;
    cout << "maximum int = " << INT_MAX << endl;
    cout << "minimum long = " << LONG_MIN << endl;
    cout << "maximum long = " << LONG_MAX << endl;
    cout << "minimum signed char = " << SCHAR_MIN << endl;
    cout << "maximum signed char = " << SCHAR_MAX << endl;
    cout << "maximum unsigned char = " << UCHAR_MAX << endl;
    cout << "maximum unsigned short = " << USHRT_MAX << endl;
    cout << "maximum unsigned = " << UINT_MAX << endl;
    cout << "maximum unsigned long = " << ULONG_MAX << endl;
    return 0;
}
