#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void remove_item(int a[], int& n, int x){
    int index;

    for(int b = 0; b < n; b++){
        if(a[b] == x){
            index = b;
            break;
        }
    }

    for(int b = index; b < n-1; b++){
        a[b] = a[b+1];
    }

    n--;


}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int a[] = {11,22,33,44,55,66,77};

    int n = 7;

    for(int b = 0; b < n; b++){
        cout << a[b] << " ";
    }

    cout << endl << endl;

    remove_item(a, n, 33);

    for(int b = 0; b < n; b++){
        cout << a[b] << " ";
    }
    return 0;
}
