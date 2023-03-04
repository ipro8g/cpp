#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    int i = 0, j = 0, str_len = 0, frequency[26];
    char line[100];

    cout << "Enter text line here: ";
    cin.getline(line, 100);

    while(*(line + str_len)){

    str_len++;
    }

    while(i < 26){

        frequency[i] = 0;

    i++;
    }

    i = 0;


    for(char c = 'a'; c <= 'z'; c++){

        while(i < str_len){

            if(c == *(line + i)){

                frequency[j]++;
            }

            i++;
        }
        i = 0;

        j++;
    }

    i = 0;

    char c = 'a';

    while(i < 26){

        cout << c << ": " << frequency[i] << endl;
        i++;
        c++;
    }

    return 0;
}
