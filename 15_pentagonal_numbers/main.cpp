#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

bool is_pentagonal(int number){

    for(int a = 1; a < number; a++){
        if(((3*a*a) - a)/2 == number){
            return true;
        }
    }

    return false;
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int number;

    cout << "enter number for check its pentagonal state here: " << endl;
    cin >> number;

    if(is_pentagonal(number)) cout << number << " is a pentagonal number" << endl;
    else cout << number <<" is not a pentagonal number" << endl;
    return 0;
}
