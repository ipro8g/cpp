#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;



int main(){
    char clause[20];

    do{

        cin.getline(clause, 80, ',');

        if(*clause) cout << "\t[" << clause << "]\n";

    }while(*clause);

    return 0;
}
