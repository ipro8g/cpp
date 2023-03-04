#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

const double pi = 3.141592654;

double the_function(int k){
    return k / pi;
}

double product(double (*pf)(int), int n){
    return (*pf)(n);
}

int main(){
    int values[] = {12,6,18,24,30};
    double acum = 1;

    for(int a = 0; a < 5; a++){
        acum *= product(the_function, values[a]);
        cout << acum << endl;
    }

    cout << "Result: " << acum << endl;

    return 0;
}
