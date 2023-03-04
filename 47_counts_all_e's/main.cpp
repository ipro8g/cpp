#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;



int main(){
    char ch;
    int count1 = 0;

    cout << "Enter z to exit";

    while(cin.get(ch)){

        if(ch == 'z'){

            break;
        }

        if(ch == 'e'){

            count1++;
        }
    }

    cout << count1 << " e's were counted.\n";

    return 0;
}
