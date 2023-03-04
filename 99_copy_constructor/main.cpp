#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Rational{

public:

    Rational(int n, int d) : num(n), den(d){
        cout << "default constructor callled\n";
    }

    Rational(const Rational& r) : num(r.num), den(r.den){

        cout << "copy constructor callled\n";
    }

private:

    int num, den;

};

Rational f(Rational r){  //calls the copy constructor, copying ? to r
    Rational s = r;      //calls the copy constructor, copying r to s
    return r;           //calls the copy constructor, copying s to ?
}

int main(){

    Rational x(22,7); //default constructor
    Rational y(x);
    f(y);

    return 0;
}
