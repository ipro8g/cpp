#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Rational{

public:

    Rational(float num){

        finds(num);
    }

    void finds(float);
    void r_assign(int, int);
    double convert();
    void invert();
    void print();
    bool is_expressed();

private:

    int num, den, flag1;
};

int main(){

    Rational pi1(float(3.14));

    if(pi1.is_expressed()){

        pi1.print();
    }else{

        cout << 3.14 << " cannot be expressed" << endl;
    }

    return 0;
}

void Rational::r_assign(int numerator, int denominator){

    num = numerator;
    den = denominator;
}

double Rational::convert(){

    return double(num)/den;
}

void Rational::invert(){

    int temp = num;
    num = den;
    den = temp;
}

void Rational::print(){

    cout << num << "/" << den;
}

void Rational::finds(float val){

        flag1 = false;

        for(float a = 1; a <= 1000; a++){

            for(float b = 1; b <= 1000; b++){

                if(float(a/b) == val){

                    num = a;
                    den = b;
                    flag1 = true;

                }else if(float(b/a) == val){

                    num = b;
                    den = a;
                    flag1 = true;
                }
            }
        }

        if(!flag1){

            r_assign(num, den);
        }
}

bool Rational::is_expressed(){

    return flag1;
}
