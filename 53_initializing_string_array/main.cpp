#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char* name[] = {"Jamaica",
                    "China",
                    "Japan",
                    "Bulgaria"};

    cout << "The names are:\n";


    for(int i = 0; i < 4; i++){

        cout << "\t" << i << ".[" << name[i] << "]" << endl;
    }

    return 0;
}
