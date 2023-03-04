#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Point{

public:

    Point(double x = 0, double y = 0, double z = 0) : x_(x), y_(y), z_(z){}

    Point(const Point& p) : x_(p.x_), y_(p.y_), z_(p.z_){}

    void print();

    void negate();

    double norm();

private:

    double x_;
    double y_;
    double z_;

};

void Point::print(){

        cout << x_ << "\t" << y_ << "\t" << z_ << endl;
    }

void Point::negate(){

        x_ = x_*-1;
        y_ = y_*-1;
        z_= z_*-1;
    }

double Point::norm(){ //distance to origin (0,0,0)

    return sqrt(pow((x_ - 0),2) + pow((y_ - 0),2) + pow((z_ - 0),2));
}

int main(){

    Point point(1.23, 4.56, 7.89);

    point.print();

    point.negate();

    point.print();

    cout << point.norm() << endl;


    return 0;
}
