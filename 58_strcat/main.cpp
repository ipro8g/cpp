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

    cout << "before strcat: " << x1 << endl;

    //this will append the x2 values into x1
    strcat(x1, x2, 2);

    cout << "after strcat: " << x1 << endl;


    return 0;
}
