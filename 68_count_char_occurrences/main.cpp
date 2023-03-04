#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int str_chr(char* str, char w){
    int a = 0, count_w = 0;

    while(*(str + a)){

        if(w == *(str + a)){

            count_w++;
        }

        a++;
    }

    return count_w;

}

int main(){
    char* str = "This is a text where we will count letter 'w'";
    char lett = 'w';

    cout << "'w' was found " << str_chr(str, lett) << " times" << endl;

    return 0;
}
