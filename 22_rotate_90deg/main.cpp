#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void rotate_90(int a[3][3]){
    int temp[3][3], d, e;

    for(int b = 0; b < 3; b++){

        for(int c = 0, d = 2; c < 3; c++, d--){

            cout << a[d][b] << " ";
        }

        cout << endl;
    }

}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int a[3][3] = {
        {11,22,33},
        {44,55,66},
        {77,88,99}
        };

    rotate_90(a);

    return 0;
}
