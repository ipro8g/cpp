#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int str_ncmp(char* s1, char* s2, int n){
    int a = 0, b = 0, c = 0;

    while(*(s1 + a)){

        if(*(s1 + a) != *(s2 + a)){

            return -1;
        }

        a++;
    }

    return 0;
}

int main(){
    char* s1 = "substring";
    char* s2 = "this is the big string";
    char* s3 = "this is t";

switch(str_ncmp(s1, s2, 9)){

        case -1:
        cout << "s2 is greater than s1";
        break;

        case 1:
        cout << "s1 is greater than s2";
        break;

        case 0:
        cout << "s1 is contained at s2";
        break;

    }

    cout << endl;

switch(str_ncmp(s3, s2, 9)){

        case 0:
        cout << "s3 is contained at s2";
        break;

    }

    return 0;
}
