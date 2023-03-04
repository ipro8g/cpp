#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

double get_rect_area_poly(double c, double c1, double c2, double c3, double c4,  double c5,  double sl,  double ml){
    double interval = 0.000001, acum = 0, value = ml;


    while(value <= sl){
        acum += (c + c1*(value) + c2*(pow(value, 2)) + c3*(pow(value, 3)) +
        c4*(pow(value, 4)) + c5*(pow(value, 5))) * (interval);

        value += interval;
    }

    return acum;
}

double get_rect_area_root(double sl, double ml){
    double acum = 0, interval = 0.0000001, value = ml;

    while(value <= sl){

        acum += sqrt(value) * interval;
        value += interval;
    }

    return acum;
}

double cos_area(double sl, double ml){
    double acum = 0, interval = 0.0000001, value = ml;

    while(value <= sl){

        acum += cos(value) * interval;
        value += interval;
    }

    return acum;
}

double exp_area(double sl, double ml, int exp){
    double acum = 0, interval = 0.0000001, value = ml;

    while(value <= sl){

        acum += pow(value, exp) * interval;
        value += interval;
    }

    return acum;
}

double log_area(double sl, double ml){
    double acum = 0, interval = 0.0000001, value = ml;

    while(value <= sl){

        acum += log(value) * interval;
        value += interval;
    }

    return acum;
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    double c, c1, c2, c3, c4, c5, sl, ml, res, ec, ic;
    c = sl = ml = c1 = c2 = c3 = c4 = c5 = 0;

    int op, exp;

    cout << "Select an option:\n\n1)Polynomial functions\n\n2)Sqrt(x) function\n\n3)cos(x) function\n\n4)exp function\n\n5)log function\n\n" << endl;
    cin >> op;

    switch(op){

    case 1:
    cout << "Enter function coeficients (or zero on the case) from constant to x^5\n\nC + C1 * X + C2 * X^2 + C3 * X^3 + C4 * X^4 + C5 * X^5 here: ";
    cin >> c >> c1 >> c2 >> c3 >> c4 >> c5;

    cout << "Enter superior limit here: ";
    cin >> sl;

    cout <<"Enter minor limit here: ";
    cin >> ml;

    res = get_rect_area_poly(c, c1, c2, c3, c4, c5, sl, ml);

    break;

    case 2:
    cout << "Enter superior limit here: ";
    cin >> sl;

    cout <<"Enter minor limit here: ";
    cin >> ml;

    res = get_rect_area_root(sl, ml);
    break;

    case 3:
    cout << "Enter superior limit here: ";
    cin >> sl;

    cout <<"Enter minor limit here: ";
    cin >> ml;

    res = cos_area(sl, ml);
    break;

    case 4:
    cout << "Enter superior limit here: ";
    cin >> sl;

    cout <<"Enter minor limit here: ";
    cin >> ml;

    cout << "Enter exponent here: ";
    cin >> exp;

    res = exp_area(sl, ml, exp);
    break;

    case 5:
    cout << "Enter superior limit here: ";
    cin >> sl;

    cout <<"Enter minor limit here: ";
    cin >> ml;

    res = log_area(sl, ml);
    break;

    }

    cout << "\n\nArea under the curve is: " << res << " u^2\n" << endl;

    return 0;
}
