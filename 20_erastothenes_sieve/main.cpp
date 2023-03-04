#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

const int n_size = 500;

//set primme[i] = 1 if and only if i is prime:
void sieve(int prime[], const int n){

    for(int i = 2; i < n; i++){

        prime[i] = 1; //assume all i > 1 are prime

        for(int p = 2; p <= n/2; p++){

            for(int m = 2*p; m < n; m+= p){

                prime[m] = 0; //no multiple of p is prime
            }

            while(!prime[p]){

                p++; //advance p to next prime
            }
        }
    }
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int prime[n_size] = {0};

    sieve(prime, n_size);

    for(int i = 0; i < n_size; i++){

        if(prime[i]){

            cout << i << " ";
        }

        if((i+1)%50 == 0){

            cout << endl;
        }
    }

    return 0;
}
