#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

void str_cpy(char* s2, char* s1){
    int a = 0;

    while(*(s1 + a)){

        *(s2 + a) = *(s1 + a);
        a++;
    }
}

int main(){
    int a = 0;
    char* s1 = "This is a s1 string that will be copied into s2";

    while(*(s1 + a)){
        a++;
    }

    char s2[a];

    str_cpy(s2, s1);

    cout << s2;

    return 0;
}
