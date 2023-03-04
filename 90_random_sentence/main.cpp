#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    unsigned seed;
    seed = time(NULL);
    srand(seed);
    int op[3], num = 0, a = 0, b = 0;

    char* article[5] = {"a", "some", "that", "this", "the"};
    char* noun[5] = {"boy", "dog", "girl", "man", "woman"};
    char* verb[5] = {"barked at", "bit", "kissed", "spoke to"};

    while(b < 5){

    while(a < 3){

        do{

            num = int(rand()/10e7);

        }while(num < 0 || num > 4);

        op[a] = num;

        a++;
    }

    a = 0;


    cout << article[op[0]] << " " << noun[op[1]] << " " << verb[op[2]] << endl;

    b++;
    }

    return 0;
}
