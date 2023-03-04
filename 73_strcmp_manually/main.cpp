#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int str_cmp(char* s1, char* s2){
    int a = 0, b = 0, c = 0;
    bool flag1 = true;

    while(*(s1 + a)){

        a++;
    }

    while(*(s2 + b)){

        b++;
    }

    if(a > b){

        return 1;
    }else if(b > a){

        return -1;
    }else if(a == b){

        while(*(s1 + c)){

            if(*(s1 + c) != *(s2 + c)){

                flag1 = false;
                return -1;
            }

            c++;
        }

        return 0;
    }
}

int main(){
    char* s1 = "This is a s1 string";
    char* s2 = "This is a s1 string";

    switch(str_cmp(s1, s2)){
        case -1:
        cout << "s2 is greater than s1";
        break;

        case 1:
        cout << "s1 is greater than s2";
        break;

        case 0:
        cout << "both string s1 and s2 are equals";
        break;
    }

    return 0;
}
