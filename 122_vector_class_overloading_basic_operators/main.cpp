#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Vector{

    friend Vector operator+(Vector vector1, Vector vector2){

        Vector vector3(vector1.x_ + vector2.x_, vector1.y_ + vector2.y_);

        return vector3;
    }

    friend Vector operator-(Vector vector1, Vector vector2){

        Vector vector3(vector1.x_ - vector2.x_, vector1.y_ - vector2.y_);

        return vector3;
    }

    friend float operator*(Vector vector1, Vector vector2){

        return (vector1.x_ * vector2.x_) + (vector1.y_ * vector2.y_);
    }

    friend void operator%(Vector vector1, Vector vector2){

        float cos_alpha = (vector1 * vector2)/(vector1.get_mod() * vector2.get_mod());

        cout << acos(cos_alpha);
    }

    friend float operator/(Vector vector1, Vector vector2){

        return (vector1.get_x() * vector2.get_y()) - (vector2.get_x() * vector1.get_y());
    }

    public:
        Vector(float x = 0, float y = 0) : x_(x), y_(y){}

        void print(){
            cout << x_ << "\t" << y_ << endl;
        }

        float get_x(){

            return x_;
        }

        float get_y(){

            return y_;
        }

        float get_mod(){

            return sqrt(x_ * x_ + y_ * y_);
        }

    private:
        float x_, y_;

};

int main(){

    Vector vector1(12.56, 14.87);
    Vector vector2(1.521, 9.841);

    cout << "vector1 + vector2: " << endl;
    Vector vector3 = vector1 + vector2;
    vector3.print();

    cout << "\nvector1 - vector2: " << endl;
    vector3 = vector1 - vector2;
    vector3.print();

    //we overload * for dot product
    cout << "\nDot product between: " << vector1.get_x() << "i + " << vector1.get_y() << "j and " << vector2.get_x() << "i + " << vector2.get_y() << "j is: " << vector1 * vector2 << "\n" << endl;

    //we overload % for angle
    cout << "Angle between: " << vector1.get_x() << "i + " << vector1.get_y() << "j and " << vector2.get_x() << "i + " << vector2.get_y() << "j is: ";
    vector1%vector2;
    cout << " rads\n" << endl;

    //we overload / for cross product
    cout << "Cross product between: " << vector1.get_x() << "i + " << vector1.get_y() << "j and " << vector2.get_x() << "i + " << vector2.get_y() << "j is: " << vector1 / vector2 << "\n" << endl;

    return 0;
}
