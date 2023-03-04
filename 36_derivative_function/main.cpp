#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

double derivative(double (*pf)(double), double point, double tol){
    return (((*pf)(point + tol) - (*pf)(point - tol))/ (2 * tol));
}

double derivative_exp(double (*pf)(double, int), double point, double tol, int exp){
    return (((*pf)(point + tol, exp) - (*pf)(point - tol, exp))/ (2 * tol));
}


double sq_root(double t){
    return sqrt(t);
}

double sin_d(double t){
    return sin(t);
}

double exp_d(double t, int index){
    return pow(t, index);
}

double log_d(double t){
    return log(t);
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int indx, op;
    double point, tolerance = 0.01;

    cout << "Select an option:\n\n1) derivative of sqrt function\n\n2) derivative of sin function\n\n3) derivative of exp function\n\n4) derivative of log function\n\n";
    cin >> op;

    cout << "Enter point to evalutate here: ";
    cin >> point;

    switch(op){
        case 1:
        cout << "Derivative evaluate on point: " << point << " is: " << derivative(sqrt, point, tolerance) << endl;
        break;

        case 2:
        cout << "Derivative evaluate on point: " << point << " is: " << derivative(sin_d, point, tolerance) << endl;
        break;

        case 3:
        cout << "Enter exponent here: ";
        cin >> indx;

        cout << "Derivative evaluate on point: " << point << " is: " << derivative_exp(exp_d, point, tolerance, indx) << endl;
        break;

        case 4:
        cout << "Derivative evaluate on point: " << point << " is: " << derivative(log_d, point, tolerance) << endl;
        break;
    }
    return 0;
}
