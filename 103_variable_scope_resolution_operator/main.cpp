#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Point{

public:

    Point(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z){}

    void print();

private:

    double x;
    double y;
    double z;

};

void Point::print(){

        cout << x << "\t" << y << "\t" << z << endl;
    }

int main(){

    Point point(1.23, 4.56, 7.89);
    point.print();

    return 0;
}
