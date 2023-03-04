#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>

using namespace std;

const double pi = 3.141592654;

const unsigned long mult_ = 234567821;
const unsigned long mod_ = ULONG_MAX; //4294967295
const int max_ = INT_MAX;   //2147483647

class Random{

public:

    Random(){
        seed_ = time(NULL);
    }

    Random(unsigned long seed) : seed_(seed){
        randomize();
    }

    int integer(int max = max_){

        randomize();
        return seed_%max_;
    }

    int integer(int min, int max){

        randomize();
        return min + seed_%(max - min + 1);
    }

    double real(){

    randomize();
    return double(seed_)/double(mod_);
    }

private:

    unsigned long seed_;

    void randomize(){

        seed_ = (mult_*seed_ + 1)%mod_;
    }
};

int main(){

    Random random;

    for(int i = 1; i <= 10; i++){

        int m = random.integer();
        int n = random.integer(1,99);
        double x = random.real();
        cout << "\t" << m << "\t" << n << "\t" << x << endl;

    }
    return 0;
}
