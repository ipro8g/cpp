#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

double* search_num(double a[5],double b, int n){
    for(int m = 0; m < n; m++)
        if(*(a + m) == b) return (a + m);

    double *v_p = 0;
    return v_p;
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    double a[5] = {1,2,3.14159,4,5};
    double b = 3.14159;

    cout << b << " was found on: " << search_num(a, b, 5) << endl;


    return 0;
}
