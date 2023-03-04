#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int next_int(){
    char ch;
    int n;

    while(ch == cin.peek()){

        if(ch >= '0' && ch <= '9'){

            cin >> n;
            break;
        }else{
            cin.get(ch);
        }

        return n;
    }
}

int main(){
    int m = next_int(), n = next_int();

    cin.ignore(80, '\n');   //ignore the rest of input line
    cout << m << " + " << n << " = " << m+n << endl;

    return 0;
}
