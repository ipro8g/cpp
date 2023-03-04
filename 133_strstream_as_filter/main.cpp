#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <strstream>

using namespace std;

const double pi = 3.141592654;

//this uses a function form() to create form letters

char* form(char* name, int male){

    const int size = 128;
    static char buffer[size];
    static ostrstream ostr(buffer, size);
    ostr.seekp(ios::beg);

    ostr << "Dear ";

    if(male){

        ostr << "Mr. ";
    }else{

        ostr << "Mrs. ";
    }

    ostr << name << ",\n\t I have an exclusive offer for you and your ";

    if(male){

        ostr << "wife, Mrs. ";
    }else{

        ostr << "husband, Mr. ";
    }

    ostr << name << "...\n" << ends;
    return buffer;
}

int main(){

    cout << form("Baker", 1);
    cout << form("Green", 1);
    cout << form("North", 0);
    cout << form("Smith", 1);

    return 0;
}
