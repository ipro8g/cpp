#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

float sum(float* a[], int n){
    float acum = 0;

    for(int b = 0; b < n; b++){
        acum += *a[b];
    }

    return acum;
}

int main(){
    int n = 10;
    float* a[n];

    a[0] = new float(11);
    a[1] = new float(22);
    a[2] = new float(33);
    a[3] = new float(44);
    a[4] = new float(55);
    a[5] = new float(66);
    a[6] = new float(77);
    a[7] = new float(88);
    a[8] = new float(99);
    a[9] = new float(10);

    cout << sum(a, 5);



    return 0;
}
