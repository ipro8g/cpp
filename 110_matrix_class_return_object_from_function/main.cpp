#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>

using namespace std;

const double pi = 3.141592654;


class Matrix{

public:

    Matrix(double a = 0, double b = 0, double c = 0, double d = 0) : a_(a), b_(b), c_(c), d_(d){}

    ~Matrix(){
        cout << "Matrix has been deallocated" << endl;
    }

    double det(){

        return (a_*d_)-(c_*b_);
    }

    Matrix inverse(){

        double k = 1/det();
        Matrix temp(k*d_, k*-b_, k*-c_, k*a_);
        return temp;
    }

    void print(){

        cout << a_ << "\t" << b_ << "\n" << c_ << "\t" << d_ << endl;
    }

    bool is_singular(){

        if(int(det()) == 0){

            return true;
        }else{

            return false;
        }
    }

private:
    double a_, b_, c_, d_;

};


int main(){
    double a = 3, b = -4, c = 2, d = -5;

    Matrix matrix(a, b, c, d);
    matrix.print();

    if(matrix.is_singular()){

        cout << "the last one is singular matrix" << endl;
    }else{

        cout << "the last one is not singular matrix" << endl;
    }

    Matrix i_matrix = matrix.inverse();
    i_matrix.print();

    if(i_matrix.is_singular()){

        cout << "the last one is singular matrix" << endl;
    }else{

        cout << "the last one is not singular matrix" << endl;
    }

    return 0;
}
