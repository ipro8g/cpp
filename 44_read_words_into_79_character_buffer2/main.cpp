#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;



int main(){
    int count1 = 0;
    char word[80];

    while(*word){
        cout << "\t\"" << word << "\"\n";
        cin >> word;
    }
    return 0;
}
