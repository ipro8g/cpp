#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

char* str_cat(char* s1, char* s2){
    int a = 0, b = 0;

    while(*(s1 + a)){

        a++;
    }

    while(*(s2 + b)){

        b++;
    }

    char* s3 = new char[a + b];

    for(int c = 0; c < a; c++){

        *(s3 + c) = *(s1 + c);
    }

    for(int c = 0; c < b; c++){

        *(s3 + a + c) = *(s2 + c);
    }

    return s3;
}

int main(){
    char* s1 = "This is a s1 string";
    char* s2 = ", and this will added to s1 string";

    s1 = str_cat(s1, s2);

    cout << s1;

    return 0;
}
