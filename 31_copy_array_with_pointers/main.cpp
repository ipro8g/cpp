#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void copy_a(double a[5],double b[5],int n){
    for(int m = 0; m < n; m++)
        *(b + m) = *(a + m);
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    double a[5] = {1,2,3,4,5};
    double b[5];

    copy_a(a, b, 5);

    for(int n = 0; n < 5; n++)
        cout << b[n] << endl;


    return 0;
}
