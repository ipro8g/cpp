#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

float* new_array(float a[5], float b[5], int n){
    float* c = new float[10];

    for(int m = 0; m < n; m++){

        *(c + m) = *(a + m);
        cout << "assigning to: " << c + m << endl;

    }

    for(int m = n; m < 2 * n; m++){

        *(c + m) = *(b + m - n);
        cout << "assigning to: " << c + m << endl;

    }

    return c;
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    float a[5] = {1,2,3,4,5};
    float b[5] = {6,7,8,9,10};

    int n = 5;



    float* c = new_array(a, b, n);

    for(int m = 0; m < (2 * n); m++){

        cout << c + m << " contains: " << *(c + m) << endl;
    }


    return 0;
}
