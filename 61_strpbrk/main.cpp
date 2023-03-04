#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char s[] = "THe Mississippi is a long river";
    cout << "s = \"" << s << "\"\n";

    char* p = strpbrk(s, "nopqr");

    //points on the first occurrence at any of the letters passed as argument
    cout << "strpbrk(s, \"nopqr\") points to s[" << p - s << "]\n";

    p = strpbrk(s, "NOPQR");

    if(p == NULL){
        cout << "strpbrk(s, \"NOPQR\") returns NULL\n";
    }

    return 0;
}
