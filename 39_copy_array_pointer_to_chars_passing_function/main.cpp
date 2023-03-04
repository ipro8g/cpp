#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

float* reverse_a(float* a[], int n){
    int c, b;
    float* new_a = new float[n];

    for(b = 0, c = n-1; b < n; b++, c--){
        new_a[c] = *a[b];
    }

    return new_a;
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int n = 5;
    float* a[n];

    a[0] = new float(11);
    a[1] = new float(22);
    a[2] = new float(33);
    a[3] = new float(44);
    a[4] = new float(55);

    for(int b = 0; b < n; b++){
        cout << *a[b] << endl;
    }

    float* new_a = reverse_a(a, n);

    for(int b = 0; b < n; b++){
        cout << new_a[b] << endl;
    }

    return 0;
}
