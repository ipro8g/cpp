#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

int main(){

    double angle = 0.781, c = 0, a = 0, b = 0, d = 0;
    const double pi = 3.141592654;
    const double e = 2.718281828;

    //1st identity

    if(pow(cos(angle), 2)+pow(sin(angle), 2)) cout << "The identity cos^2(x) + sin^2(x) = 1, is right\n" << endl;

    //2nd identity

    a = 2 * tan(angle);

    b = 1 - pow(tan(angle), 2);

    c = atan(a / b);

    d = c / angle;

    if(d == 2) cout << "The identity tg(2x) =  2tg(x) / 1 - tg^2(x) , is right\n" << endl;

    //3rd identity

    cout << (pi / 2) << " = " << (asin(angle) + acos(angle)) << "\nThe identity asin(x) + acos(x) = pi / 2, is right\n" << endl;

    //4th identity
    cout << "The identity log(x^2) = 2 * log(x), is right, " << log(pow(angle, 2)) << " = " << (2 * log(angle)) << endl;
    if(log(pow(angle, 2)) == (2 * log(angle))) cout << "The identity log(x^2) = 2 * log(x), is right\n\n" << endl;

    //5th identity
    cout << pow(pi, angle) << " = " << pow(e, ((angle * log(pi)))) << ", the identity b^x = e^(x * log(b)), is right\n" << endl;
    return 0;
}
