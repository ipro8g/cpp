#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char s[] = "ABCDEFGHIJK";

    cout << "strlen(" << s << ") = " << strlen(s) << endl;
    cout << "strlen(\"\") = " << strlen("") << endl;
    char buffer[80];
    cout << "Enter string: ";
    cin >> buffer;
    cout << "strlen(" << buffer << ") = " << strlen(buffer) << endl;
    return 0;
}
