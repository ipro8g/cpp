#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

void count_words(char* line){
    int a = 0, count1 = 0, count2 = 0;

    while(*(line + a)){


        if(*(line + a) == ' ' && count1 == 4){

            count2++;
            count1 = 0;
        }else{
            count1++;
        }

        a++;
    }

    cout << count2 << ", 4 letters words detected" << endl;

    a = 0;
    while(*(line + a)){

        *(line + a) = '\0';
        a++;
    }
}

int main(){
    char line[80];

    do{

        cin.getline(line, 80);

        if(*line){

            count_words(line);
        }
    }while(*line);

    return 0;
}
