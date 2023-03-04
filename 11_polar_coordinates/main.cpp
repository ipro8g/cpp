#include <iostream>
#include <cmath>

using namespace std;

void polar(double x, double y, double& angle,double& magnitude){
        angle = atan(y / x);

        double a = x * x;
        double b = y * y;

        double c = sqrt(a+b);

        magnitude = c;
    }

int main(){
    double angle, magnitude, x, y;

    cout << "enter x y coordinates here: ";
    cin >> x >> y;

    polar(x, y, angle, magnitude);

    cout << "angle: " << angle << " rad" << endl;
    cout << "magnitude: " << magnitude << " units" << endl;

    return 0;
}
