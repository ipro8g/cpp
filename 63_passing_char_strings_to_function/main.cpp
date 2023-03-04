#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

void the_function1(char s1[]){
    cout << s1 << endl;
}

void the_function2(char* s2){
    cout << s2 << endl;
}

int main(){
    char s1[] = "Hello again";
    char* s2 = "Hello again";

    the_function1(s1);
    the_function2(s2);

    return 0;
}
