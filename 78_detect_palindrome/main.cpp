#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

bool detect_palindrome(char* s1){
    int a = 0, c = 0;

    while(*(s1 + a)){

        a++;
    }

    for(int b = 0, c = a - 1; b < (a/2); b++, c--){

        if((*(s1 + b)) != (*(s1 + c))){

            return false;
        }
    }

    return true;
}

int main(){
    char* s1 = "arepera";
    int a = 0, c = 0;



    if(detect_palindrome(s1)){

        cout << s1 << " is palindrome";
    }else{

         cout << s1 << " is not palindrome";
    }


    return 0;
}
