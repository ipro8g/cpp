#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

float& component(float* v, int k){
    return v[k-1];
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    float v[4];

    for(int k = 1; k <= 4; k++){
            component(v,k) = 1.0/k;
    }

    for(int i = 0; i < 4; i++){
        cout << "v[" << i << "] = " << v[i] << endl;
    }

    return 0;
}
