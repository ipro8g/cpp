#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char line[80];
    char* p;
    char* words[10];
    int count1 = 0;


        cin.getline(line, 80);

        if(*line){

            cout << "The string is: [" << line << "]\nIts tokens are:\n";

            p = strtok(line, " ");

            while(p){

            words[count1] = p;
            p = strtok(NULL, " ");
            count1++;
            }
        }

        for(int i = 0; i < count1; i++){

            cout << "\t[" << words[i] << "]\n";
        }



    return 0;
}
