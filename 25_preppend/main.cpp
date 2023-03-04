#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void prepend(int a[], int m, int b[], int n, int& size_o2){
    int size_o = sizeof(a);
    int q = 0;

    size_o2 = m + n;

    for(int p = m; p < size_o; p++, q++){

        a[p] = b[q];
    }


}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int a[] = {1,2,3,4,5,0,0,0};
    int b[] = {6,7,8};
    int size_o;

    prepend(a, 5, b, 3, size_o);

    for(int u = 0; u < size_o; u++){
        cout << a[u] << " ";
    }

    return 0;
}
