#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Rational{

public:

    Rational(){

        num_ = 0;
        den_ = 0;
    }

    void r_assign(float num, float den){

        num_ = num;
        den_ = den;
    }

    float get_num(){

        return num_;
    }

    float get_den(){

        return den_;
    }

    double convert();
    void invert();

    void print(){

        cout << num_ << "\/" << den_ << endl;
    }

private:

    float num_, den_;
};

class Stack{

public:

    Stack(int s) : size(s), top(-1){

        a = new Rational[size];
        temp = new Rational[size];
        stock = 0;
    }

    ~Stack(){

        delete []a;
    }

    void push(float num, float den){

        a[stock].r_assign(num, den);
        stock++;
    }

    int pop(){

        stock--;
    }

    int is_empty() const {

        return top == -1;
    }

    int is_full() const {

        return top == (size-1);
    }

    int count_s(){

        return stock;
    }

    int get_size(){

        return size;
    }

    void print(){

        int c = 0;

        while(c < stock){

            a[c].print();
            c++;
        }
    }

    void reverse(){
        int d = 0;

        while(d < stock){

            temp[d].r_assign(a[d].get_num(), a[d].get_den());
            d++;
        }

        d = 0;
        int c = stock-1;

        for(d = 0; d < stock; d++, c--){

            a[d].r_assign(temp[c].get_num(), temp[c].get_den());
        }
    }

private:

    int size; //size of array
    int top; //top of stack
    Rational* a; //array to hold stack items
    Rational* temp;
    int stock;

};

int main(){
    Stack rational_stack(10);

    float nums[3] = {0,1,2};
    float dens[3] = {4,5,6};
    int i = 0;

    while(i < 3){

        rational_stack.push(nums[i], dens[i]);
        i++;
    }

    rational_stack.print();
    rational_stack.reverse();
    rational_stack.print();
    return 0;
}
