#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char x1[] = "ABCDEFGH";
    char x2[] = "XYZ";

    cout << "before strncpy: " << x1 << endl;

    //this will copy the first n x2 values into x1
    strncpy(x1, x2, 2);

    cout << "after strncpy: " << x1;



    return 0;
}
