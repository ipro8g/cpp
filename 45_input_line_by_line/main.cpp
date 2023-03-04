#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;



int main(){
    char line[80];

    do{

        cin.getline(line, 80);

        if(*line) cout << "\t[" << line << "]\n";

    }while(*line);

    return 0;
}
