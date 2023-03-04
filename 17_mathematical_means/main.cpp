#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void compute_means(double& arith, double& geo, double& harm, double a, double b, double c){
    double result, mark = 0, product;

    //arithmetic mean
    arith = (a + b + c )/ 3;

    //geometrical mean
    product = a * b * c;
    mark = product / 10;

    while(mark < product){

        if(int(mark * mark * mark ) == product){
            geo = mark;
            break;
        }

        mark += 0.001;
    }

    //harmonic mean
    harm = 3 / (1/a + 1/b + 1/c);
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    double a, b, c, arith, geo, harm;
    cout << "Enter numbers a b c here: ";
    cin >> a >> b >> c;

    compute_means(arith, geo, harm, a, b, c);
    cout << a << " " << b << " " << c << " Means" << endl;
    cout << "Arithmetic: " << arith << endl;
    cout << "Geometrical: " << geo << endl;
    cout << "Harmonic: " << harm << endl;

    return 0;
}
