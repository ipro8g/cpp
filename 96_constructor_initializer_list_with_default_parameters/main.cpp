#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Rational{

public:
    //default parameters values
    Rational(int n = 0, int d = 1) : num(n), den(d){}

    void print(){

    cout << num << "/" << den;
    }

private:

    int num, den;
};

int main(){

    Rational x, y(4), z(22,7);
    cout << "x = ";
    x.print();
    cout << "\ny = ";
    y.print();
    cout <<"\nz = ";
    z.print();
    cout << endl;

    return 0;
}


