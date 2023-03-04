#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Rational{

public:

    Rational(int n = 0, int d = 1) : num(n), den(d){

    }

    void print(){


    }

    void show_reduces(){

        reduces();
        cout << num << "/" << den << endl;
    }

private:

    int num, den;

    int gcde(int j, int k){

        if(j > k){

            for(int i = k; i >= 1; i--){

                if((j%i == 0) && (k%i == 0)){

                    return i;
                }
            }
        }else if(k > j){

            for(int i = j; i >= 1; i--){

                if((j%i == 0) && (k%i == 0)){

                    return i;
                }
            }
        }
    }

    void reduces(){

        int g = gcde(num, den);

        num /= g;

        den /= g;
    }
};

int main(){

    Rational x(100,360);
    x.show_reduces();

    return 0;
}


