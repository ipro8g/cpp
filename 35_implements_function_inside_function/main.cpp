#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

double derivative(double (*pf)(double t), double x, double h){
    double res = ((*pf)(x + h) - (*pf)(x - h))/(2 * h);

    return res;
}

double cube(double t){
    return t*t*t;
}

double sqrtf(double t){
    double x = 0;

    while(x <= t){
        if(x * x == t){
            return x;
        }

        x += 0.0001;
    }
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    double h, x;

    for(int p = 0; p < 3; p++){

    cout << "Enter point to evaluate here: ";
    cin >> x;

    cout << "Enter tolerance here: ";
    cin >> h;

    double res = derivative(cube, x, h);

    cout << "the numerical derivate of x^3 on point " << x << " is: " << res << endl;

    }

    for(int p = 0; p < 3; p++){

    cout << "Enter point to evaluate here: ";
    cin >> x;

    cout << "Enter tolerance here: ";
    cin >> h;

    double res = derivative(sqrtf, x, h);

    cout << "the numerical derivate of square root (x) on point " << x << " is: " << res << endl;

    }
    return 0;
}
