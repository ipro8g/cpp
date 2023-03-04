#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

char* str_rchr(char* s1, char c){
    int a = 0;

     while(*(s1 + a)){

        a++;
     }

    for(int b = a; b >= 0; b--){

        if(*(s1 + b) == c){

            return (s1 + b);
        }
    }

    return 0;
}

int main(){
    char* s1 = "substring";
    char c = 's';

    char* o = str_rchr(s1, c);

    if(o){

        cout << c << " was found on address: " << &o << endl;
    }else{

        cout << c << " was not found" << endl;
    }

    return 0;
}
