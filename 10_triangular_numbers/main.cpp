#include <iostream>
#include <ctype.h>
#include <math.h>
using namespace std;

bool is_triangular(int n){
    int b = 1;

    for(int a = 2; a < n; a++){
        b += a;

        if(b == n){
            return true;
        }

    }

    return false;
}

int main(){
    int number;
    bool result;

    /*cout << "Enter number and index number index here: " << endl;
    cin >> number;

    result = is_triangular(number);

    if(result) cout << number << " is a triangular one.";
    else cout << number << " is not a triangular one.";*/

    for(int u = 1; u < 100; u++){

        if(is_triangular(u)) cout << u << " is a triangular one." << endl;
    }

    return 0;
}
