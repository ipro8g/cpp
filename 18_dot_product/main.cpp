#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

double dot_product(double ax, double ay, double az, double bx, double by, double bz){
    return (ax * bx) + (ay * by) + (az * bz);
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    double ax, ay, az, bx, by, bz;

    cout << "Enter vector 1 coords x y z here: ";
    cin >> ax >> ay >> az;
    cout << "Enter vector 2 coords x y z here: ";
    cin >> bx >> by >> bz;

    cout << "The dot product of (" << ax << "," << ay << "," << az << "), and (" << bx << "," << by << "," << bz <<"), is: " << dot_product(ax,ay,az,bx,by,bz) << endl;

    return 0;
}
