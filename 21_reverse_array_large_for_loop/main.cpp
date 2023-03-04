#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void a_reverse(int a[], int n){

    int temp[n];
    int c;

    for(int b = n-1, c = 0; b >= 0 ; b--, c++){

        temp[c] = a[b];
    }

    for(int b = 0; b < n; b++){

        cout << temp[b] << endl;
    }
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int a[] = {1,2,3,4,5,6,7,8,9,0};

    a_reverse(a, 10);

    return 0;
}
