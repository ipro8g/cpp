#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

void pluralize(char* s){

    int l = strlen(s);

    char* plural;

    char last = s[l-1];

    if(last != 'a' || last != 'e' || last != 'i' || last != 'o' || last != 'u' || last != 'y' ){

        plural = "s";
    }else if(last == 'y'){

        if(s[l-2] != 'a' || s[l-2] != 'e' || s[l-2] != 'i' || s[l-2] != 'o' || s[l-2] != 'u'){

            s[l-1] = 'i';
            s[l] = 'e';
            s[l+1] = 's';
        }else{

            plural = "s";
        }
    }else{

        plural = "es";
    }

    strcat(s, plural);
}

int main(){
    char s[20];

    cout << "Enter word to pluralize here: " << endl;
    cin >> s;

    pluralize(s);

    cout << s;
    return 0;
}
