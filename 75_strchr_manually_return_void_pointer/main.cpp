#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

char* str_chr(char* s1, char c){
    int a = 0;

    while(*(s1 + a)){

        if(*(s1 + a) == c){
            return (s1 + a);
        }

        a++;
    }

    return 0;
}

int main(){
    char* s1 = "substring";
    char c = 'b';

    char* o = str_chr(s1, c);

    if(o){

        cout << c << " was found on address: " << &o << endl;
    }else{

        cout << c << " was not found" << endl;
    }

    return 0;
}
