#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void swap(float& x, float& y){
    float temp = x;
    x = y;
    y = temp;
}

//bubble sort
void sortmin(float* a[], int n){

    for(int i = n-1; i > 0; i--){

        for(int j = 0; j < i; j++){

                if(*a[j] > *a[j+1]) swap(*a[j], *a[j+1]);
        }
    }
}

//bubble sort
void sortmax(float* a[], int n){

    for(int i = n-1; i > 0; i--){

        for(int j = 0; j < i; j++){

                if(*a[j] < *a[j+1]) swap(*a[j], *a[j+1]);
        }
    }
}

int main(){
    int n = 10;
    float* a[n];

    a[0] = new float(-11);
    a[1] = new float(22);
    a[2] = new float(-33);
    a[3] = new float(44);
    a[4] = new float(-55);
    a[5] = new float(66);
    a[6] = new float(-77);
    a[7] = new float(88);
    a[8] = new float(-99);
    a[9] = new float(10);

    for(int b = 0; b < n; b++){
        cout << *a[b] << endl;
    }

    cout << endl;

    sortmin(a, 10);

    for(int b = 0; b < n; b++){
        cout << *a[b] << endl;
    }

    cout << endl;

    sortmax(a, 10);

    for(int b = 0; b < n; b++){
        cout << *a[b] << endl;
    }

    return 0;
}
