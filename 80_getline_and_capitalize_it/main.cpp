#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

void capitalize(char* line){
    int a = 0;

    while(*(line + a)){

        *(line + a) = toupper(*(line + a));
        a++;
    }

    cout << "\t[" << line << "]\n";
}

int main(){
    char line[80];

    do{

        cin.getline(line, 80);

        if(*line){

            capitalize(line);
        }
    }while(*line);

    return 0;
}
