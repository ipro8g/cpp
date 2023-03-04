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

        cout << "Birth of object" << endl;
    }

    ~Rational(){

        cout << "End of object" << endl;
    }

private:

    int num, den;

};

int main(){
    {
        Rational x(100,360);
    }

    return 0;
}
