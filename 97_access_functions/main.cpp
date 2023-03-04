#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Rational{

public:

    Rational(int n = 0, int d = 1) : num(n), den(d){}

    int numerator() const{

        return num;
    }

    int denominator() const{

        return den;
    }

    void print(){

    cout << num << "/" << den;
    }

private:

    int num, den;
};

int main(){

    Rational x(22,7);

    cout << "\nx numerator = " << x.numerator() << endl;

    cout <<"\nx denominator = " << x.denominator();

    cout << endl;

    return 0;
}


