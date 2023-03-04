#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char s[] = "###ABCDE#EFG##HIJK#L#MN#####O#P#####";
    char* p;

    cout << "The string is: [" << s << "]\nIts tokens are:\n";

    p = strtok(s, "#");

    while(p){

        cout << "\t[" << p << "]\n";
        p = strtok(NULL, "#");
    }

    cout << "Now the string is: [" << s << "]\n";

    return 0;
}
