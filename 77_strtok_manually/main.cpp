#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

void separate_and_count(char* s1, char c){
    int a = 0, count1 = 1, index[10], final_count = 0, size_a = 0, count2 = 0;

    bool flag1 = false;

    while(*(s1 + size_a)){

        size_a++;
    }

    index[0] = 0;

    while(*(s1 + a)){

        if(*(s1 + a) == ' '){

            index[count1] = a;
            count1++;
        }

        a++;
    }

    index[count1] = size_a;

    a = 0;

    for(int b = 0; b < count1; b++){

        for(int u = index[b]; u <= index[b+1]; u++){

            if(*(s1 + u) == c && flag1 == false){

                flag1 = true;
                final_count++;
            }
        }

        flag1 = false;
    }

    cout << final_count << endl; // how many words in s1 contains the requested char c

    char* s2[count1-1]; //trying to separate into single words
    int i, k;

    for(int b = 0, i = 0; b < count1; b++, i++){

        for(int u = index[b], k = 0; u <= index[b+1]; u++, k++){

            cout << *(s1 + u);
        }

        cout << endl;
    }
}

int main(){
    char* s1 = "thisss iss a formers string";
    char c = 's';

    separate_and_count(s1, c);


    return 0;
}
