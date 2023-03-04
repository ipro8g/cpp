#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

void count_words(char* line){
    int a = 0, count1 = 1;

    while(*(line + a)){

        if(*(line + a) == ' '){

            count1++;
        }

        a++;
    }

    cout << count1 << " words detected" << endl;
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
