#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;



int main(){
    char ch, pre = '\0';

    while(cin.get(ch)){

        if(pre == '\0' || pre == '\n'){

            cout.put(char(toupper(ch)));
        }else{

            cout.put(ch);
            pre = ch;
        }
    }

    return 0;
}
