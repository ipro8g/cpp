#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char buffer[80];

    char* name[100];
    cin.getline(buffer, 80, '$');

    name[0] = buffer;

    int count1 = 0;

    for(char* p = buffer; *p != '\0'; p++){


        if(*p == '\n'){

            *p = '\0';              //end name[count1]
            name[++count1] = p+1;   //begin next name

        }
    }

    cout << "The names are:\n";

    for(int i = 0; i < count1; i++){

        cout << "\t" << i << ".[" << name[i] << "]" << endl;
    }

    return 0;
}
