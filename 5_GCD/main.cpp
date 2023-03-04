#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m, n, temp, r;

    cout << "Enter two number to find its GCD here: " << endl;
    cin >> m >> n;

    if(m < n){
        int temp = m;
        m = n;
        n =  temp;
    }

    cout << "the GCD between " << m << " and " << n << " is: ";

    while(n > 0){
        r = m % n;
        m = n;
        n = r;
    }

    cout << m << endl;

    return 0;
}
