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
        z_ = 0;
    }

    void set_coordinates(double x, double y, double z){

        x_ = x;
        y_ = y;
        z_ = z;
    }

    double get_x(){

        return x_;
    }

    double get_y(){

        return y_;
    }

    double get_z(){

        return z_;
    }


    void print(){

        cout << x_ << "\t" << y_ << "\n" << z_ << endl;
    }

    void negate(){

        x_ *= -1;
        y_ *= -1;
        z_ *= -1;
    }

    double norm(){ //distance to origin (0,0)

    return sqrt(pow((x_ - 0),2) + pow((y_ - 0),2) + pow((z_ - 0),2));
    }

private:

    double x_;
    double y_;
    double z_;

};

class Sphere{

public:

    Sphere(double radius, double x, double y, double z){

        radius_ = radius;
        center_.set_coordinates(x, y, z);
    }

    ~Sphere(){
        cout << "Sphere has been deallocated" << endl;
    }

    double volume(){

        return (1.333)*pow(radius_,3)*pi;
    }

    double surface(){

        return 4*pow(radius_,2)*pi;
    }

    double get_x(){

        return center_.get_x();
    }

    double get_y(){

        return center_.get_y();
    }

    double get_z(){

        return center_.get_z();
    }

    double get_radius(){

        return radius_;
    }

private:
    double radius_;
    Point center_;

};


int main(){
    Sphere sphere(3.8, 2.4, 3.6, 5.1);
    cout << "X: " << sphere.get_x() << "\nY: " << sphere.get_y() << "\nZ: " << sphere.get_z() << "\nSurface: " << sphere.surface() << " square units\nVolume: " << sphere.volume() << " cube units\nRadius: " << sphere.get_radius() << " units" << endl;

    return 0;
}
