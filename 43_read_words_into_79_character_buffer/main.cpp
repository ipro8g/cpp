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

    do{

        cin >> word;
        if(*word) cout << "\t\"" << word << "\"\n";
        count1++;
    }while(*word && count1 < 4);

    cout << word << endl;
    return 0;
}
