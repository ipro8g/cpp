#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int strr_chr(char* str, char w){
    int a = 0, count_w = 0;

    while(*(str + a)){

        a++;
    }

    for(int b = a-1; b >= 0; b--){

        if(w == *(str + b)){

            return b;
        }
    }

    return 0;
}

int main(){
    char* str = "This is a text where we will count letter 'w'";
    char lett = 'w';

    cout << "'w' was found on index: " << strr_chr(str, lett) << endl;

    return 0;
}
