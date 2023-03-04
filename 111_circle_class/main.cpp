#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>

using namespace std;

const double pi = 3.141592654;


class Circle{

public:

    Circle(double radius = 0, double x = 0, double y = 0) : radius_(radius), x_(x), y_(y){}

    ~Circle(){
        cout << "Circle has been deallocated" << endl;
    }

    double area(){

        return pi*radius_*radius_;
    }

    double circumference(){

        return 2*radius_*pi;
    }

    double get_x(){

        return x_;
    }

    double get_y(){

        return y_;
    }

    double get_radius(){

        return radius_;
    }

private:
    double radius_, x_, y_;

};


int main(){
    Circle circle(1.2, 3.75, 2);
    cout << "X: " << circle.get_x() << "\nY: " << circle.get_y() << "\nCircumference: " << circle.circumference() << " units\nArea: " << circle.area() << " square units\nRadius: " << circle.get_radius() << " units" << endl;

    return 0;
}
