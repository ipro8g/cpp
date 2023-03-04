#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

char* encode(char* line, int k){
    int a = 0;
    char* line_coded = new char[100];

    while(*(line + a)){
        int c;
        char ch;

        ch = *(line + a) + k;
        *(line_coded + a) = ch;
        a++;
    }

    return line_coded;
}

char* decode(char* line, int k){
    int a = 0;
    char* line_decoded = new char[100];

    while(*(line + a)){
        int c;
        char ch;

        ch = *(line + a) - k;
        *(line_decoded + a) = ch;
        a++;
    }

    return line_decoded;
}

int main(){
    char* line = "This is an entire string text line, with many words";
    char* line_coded;
    char *line_decoded;
    int k = 6, a = 0;

    line_coded = encode(line, k);

    cout << line_coded << endl;

    line_decoded = decode(line_coded, k);

    cout << line_decoded << endl;
    return 0;
}
