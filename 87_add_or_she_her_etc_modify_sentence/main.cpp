#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char line[120];
    char* p;
    char* words[20];
    char words2[20][50];
    int count1 = 0;
    int a = 0;


        cin.getline(line, 120);

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

            if(strcmp(words[i], "he") == 0){

                strcpy(words2[i], "he");
                strcat(words2[i], " or she");
            }else if(strcmp(words[i], "him") == 0){

                strcpy(words2[i], "him");
                strcat(words2[i], " or her");
            }else if(strcmp(words[i], "his") == 0){

                strcpy(words2[i], "his");
                strcat(words2[i], " or hers");
            }else{

                strcpy(words2[i], words[i]);
            }

        }


        for(int i = 0; i < count1; i++){

            words[i] = words2[i];

            cout << words[i] << endl;
        }

    return 0;
}
