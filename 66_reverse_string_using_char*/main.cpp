#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char* s = "This is a string";
    int a = 0;

    while(s[a]){

        a++;
    }

    char w[a];

    cout << s << endl;

    for(int b = a-1, c = 0; b >= 0; b--, c++){

        *(w + c) = *(s + b);
    }

    s = w;

    cout << s << endl;

    return 0;
}
