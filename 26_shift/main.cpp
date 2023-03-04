#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void shift(int a[], int n, int s){
    int temp;
    int c[s];

    for(int b = 0; b < s; b++){
        if(b - n < 0){

            temp = s - n + b;
            c[b] = a[temp];
        }else{
            c[b] = a[b-n];
        }
    }

    for(int b = 0; b < s; b++){
        cout << c[b] << endl;
    }

}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n  = 5, s = 20;

    shift(a, n, s);
    return 0;
}
