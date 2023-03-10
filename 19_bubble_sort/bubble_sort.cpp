#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void print(float a[], const int n){
    for(int i = 0; i < n-1; i++){

        cout << a[i] << ", ";
        if((i+1)%16 == 0) cout << endl;
    }
    cout << a[n-1] << endl;
}

void swap(float& x, float& y){
    float temp = x;
    x = y;
    y = temp;
}

//bubble sort
void sort(float a[], const int n){

    for(int i = n-1; i > 0; i--){

        for(int j = 0; j < i; j++){

                if(a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
    }
}

int main(){
    float a[] = {55.5, 22.5, 99,9, 66.6, 44.4, 88.8, 33.3, 77.7};

    print(a, 8);
    sort(a, 8);
    print(a, 8);

    return 0;
}
