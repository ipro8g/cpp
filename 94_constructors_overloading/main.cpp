#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Rational{

public:

    Rational(){
        num = 0;
        den = 1;
    }

    Rational(int n){
        num = n;
        den = 1;
    }

    Rational(int n, int d){
        num = n;
        den = d;
    }

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


