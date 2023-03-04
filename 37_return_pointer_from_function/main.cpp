#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

double* find_max(double a[], int n){
    double maxv = 0.1;
    double* maxd;

    for(int i = 0; i < n; i++){

        if(*(a + i) > maxv){

            maxv = *(a + i);
            maxd = (a + i);
        }
    }

    return maxd;
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int n = 5;
    double a[n] = {33,44,99,77,22};

    double* maxd = find_max(a, n);

    cout << "the maximum is: " << *maxd;
    return 0;
}
