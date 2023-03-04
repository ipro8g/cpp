#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int str_chr(char* str, char w){
    int a = 0;

    while(*(str + a)){

        if(w == *(str + a)){

            return a;
        }

        a++;
    }

}

int main(){
    char* str = "This is a text where we will find letter 'w'";
    char lett = 'w';

    cout << "w was found on index: " << str_chr(str, lett) << endl;

    return 0;
}
