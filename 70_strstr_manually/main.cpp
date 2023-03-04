#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int str_str(char* str, char* word, int len_str, int len_word){

    int count1 = 0, a = 0, first_index = 0;
    bool flag1 = false;

    while(*(str + a)){

        if(*(str + a) == *(word + count1)){

            if(flag1 == false){

                first_index = a;

                flag1 = true;

                 count1++;
            }else{

                 count1++;
            }

        }

        a++;
    }

    if(count1 == len_word){

        return first_index;
    }else{

        return 0;
    }
}

int main(){

    char* str = "This is a text where we will find the first index for word 'panckackes'";
    char* word = "panckackes";

    int len_str = 0, len_word = 0;

    while(*(str + len_str)){

        len_str++;
    }

    while(*(word + len_word)){

        len_word++;
    }

    cout << word << " was found on index: " << str_str(str, word, len_str, len_word) << endl;

    return 0;
}
