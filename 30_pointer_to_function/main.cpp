#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

//returns the sum f(0) + f(1) + f(2) + .... + f(n-1):

int sum(int (*pf)(int k), int n){
    int s = 0;

    for(int i = 1; i <= n; i++){

        s += (*pf)(i);
    }
    return s;
}

int square(int k){

    return k*k;
}

int cube(int k){

    return k*k*k;
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    cout << sum(square, 4) << endl; // 1 + 4 + 9 + 16
    cout << sum(cube, 4) << endl; // 1 + 8 + 27 + 64

    return 0;
}
