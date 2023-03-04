#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>

using namespace std;

const double pi = 3.141592654;

class Point{

public:

    Point(){

        x_ = 0;
        y_ = 0;
    }

    void set_coordinates(double x, double y){

        x_ = x;
        y_ = y;
    }

    double get_x(){

        return x_;
    }

    double get_y(){

        return y_;
    }


    void print(){

        cout << x_ << "\t" << y_ << endl;
    }

    void negate(){

        x_ *= -1;
        y_ *= -1;
    }

    double norm(){ //distance to origin (0,0)

    return sqrt(pow((x_ - 0),2) + pow((y_ - 0),2));
    }

private:

    double x_;
    double y_;

};

class Circle{

public:

    Circle(double radius, double x, double y){

        radius_ = radius;
        center_.set_coordinates(x, y);
    }

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

        return center_.get_x();
    }

    double get_y(){

        return center_.get_y();
    }

    double get_radius(){

        return radius_;
    }

private:
    double radius_;
    Point center_;

};




int main(){
    Circle circle(1.2, 3.5, 1.2);
    cout << "X: " << circle.get_x() << "\nY: " << circle.get_y() << "\nCircumference: " << circle.circumference() << " units\nArea: " << circle.area() << " square units\nRadius: " << circle.get_radius() << " units" << endl;

    return 0;
}
