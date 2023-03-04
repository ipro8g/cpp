#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

bool is_pal(int a[]){
    int d;
    int n = sizeof(a);

    for(int c = 0, d = n-1; d < n/2; c++, d--){

        if(a[c] != a[d]){

            return false;
        }
    }
    return true;
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int a[] = {11,22,33,44,55,44,33,22,11};

    bool res = is_pal(a);

    if(res) cout << "Palindrome array detected";
    else cout << "not Palindrome array detected";

    return 0;
}
