#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Rational{

public:

    Rational(int n, int d){
        num = n;
        den = d;
    }

    void print();

private:

    int num, den;
};

int main(){

    Rational x(-1,3), y(22,7);
    cout << "x = ";
    x.print();
    cout << " and y = ";
    y.print();
    cout << endl;

    return 0;
}

void Rational::print(){

    cout << num << "/" << den;
}
