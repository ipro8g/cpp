#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char s[6];
    char s1[6] = {'H','e','l','l','o'};
    char s2[6] = "Hello";
    //char s3[]; //compiler cannot find the size of s3
    //char s4[] = new char[6]; //compiler cannot find the size of s4
    char s5[] = {'H','e','l','l','o'};
    char s6[] = "Hello";
    //char s7[] = new("Hello"); //malformed declaration, compiler asks for ;
    char* s8;
    char* s9 = new char[6];
    //char* s10 = {'H','e','l','l','o'}; //malformed initialization, compiler asks for address element
    char* s11 = "Hello";
    //char* s12 = new("Hello"); //malformed declaration, compiler asks for ;

    cout << s << "\t" << s1 << "\t" << s2 << "\t" << s5 << "\t" << s6 << "\t" << s8 << "\t" << s9 << "\t" << s11;
    return 0;
}
