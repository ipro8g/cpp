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

    cout << "before stcpy: " << x1 << endl;

    //this will copy x2 value into x1
    strcpy(x1, x2);

    cout << "after stcpy: " << x1;



    return 0;
}
