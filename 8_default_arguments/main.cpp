#include <iostream>
#include <ctype.h>
using namespace std;

int compute(int a, int b, int c = 1, int d = 1);

int main(){
    cout << compute(2, 4) << endl;
    cout << compute(2, 4, 6) << endl;
    cout << compute (2, 4, 6, 8) << endl;
    return 0;
}

int compute(int a, int b, int c, int d){
    return a*b*c*d;
}
