#include <iostream>
#include <ctype.h>
#include <math.h>
using namespace std;



int main(){
    double x, result;
    cout << "enter angle here: ";
    cin >> x;
    result = 2*cos(x)*cos(x)-1;
    cout << "using 2cos^2(x)-1: " << result << endl;
    result = cos(2*x);
    cout << "using cos(2x): " << result << endl;

    return 0;
}
