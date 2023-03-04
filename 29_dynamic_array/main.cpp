#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void get(double*& a, int& n){
    cout << "Enter number of items: ";
    cin >> n;
    a = new double[n];
    cout << "Enter " << n << " items, one per line:\n";
    for(int i = 0; i < n; i++){
        cout << "\t" << i+1 << ": ";
        cin >> a[i];
    }
}

void print(double* a, int n){

    for(int i = 0; i < n; i++){

        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    double* a; //a is simply unallocated pointer
    int n;
    get(a, n);  //now a is an array of n doubles
    print(a, n);
    delete[] a; //now a is simply an unallocated pointer again
    get(a, n);
    print(a, n);

    return 0;
}
