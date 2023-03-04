#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char name[8][24];
    int count1 = 0, count2 = 0;

    cout << "Enter at most 8 names with at most 23 characters: \n";

    while(cin.getline(name[count1], 24)){
        count1++;

        count2++;

        if(count2 == 8){
            break;
        }
    }

    cout << "The names are:\n";

    for(int i = 0; i < count1; i++){

        cout << "\t" << i << ".[" << name[i] << "]" << endl;
    }

    return 0;
}
