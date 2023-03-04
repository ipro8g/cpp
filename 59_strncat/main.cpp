#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char x2[] = "XYZ";
    char x3[] = "OPQ";

    cout << "before strncat: " << x2 << endl;

    //this will append the first n x3 values into x2
    strncat(x2, x3, 3);

    cout << "after strncat: " << x2 << endl;


    return 0;
}
