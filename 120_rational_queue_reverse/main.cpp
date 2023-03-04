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

    float get_num(){

        return num_;
    }

    float get_den(){

        return den_;
    }

    void r_assign(float num, float den){

        num_ = num;
        den_ = den;
    }

    double convert();
    void invert();

    void print(){

        cout << num_ << "\/" << den_ << endl;
    }

private:

    float num_, den_;
};

class Queue{

public:

    Queue(int s) : size(s){

        a = new Rational[size];
        stock = 0;
    }

    void insert(float num, float den){

        if(stock < size){

            a[stock].r_assign(num, den);
            stock++;
        }else{

            for(int u = 0; u < stock; u++){

                temp[u].r_assign(a[u].get_num(), a[u].get_den());
            }

        for(int p = 0; p < stock-1; p++){

            a[p].r_assign(temp[p+1].get_num(), temp[p+1].get_den());
        }

        a[stock-1].r_assign(num, den);

        }
    }

    void remove(int indx){

        for(int u = 0; u < 10; u++){

            temp[u] = a[u];
        }

        for(int p = indx; p < stock-1; p++){

            a[p] = temp[p+1];
        }

        stock--;

        for(int u = 0; u < stock-1; u++){

            temp[u] = a[u];
        }
    }

    int count_s(){

        return stock;
    }

    bool is_full(){

        if(stock == size){

            return true;
        }else{

            return false;
        }
    }

    bool is_empty(){

        if(stock == 0){

            return true;
        }else{

            return false;
        }
    }

    int get_size(){

        return size;
    }

    void reverse(){

        for(int u = 0; u < stock; u++){

            temp[u] = a[u];
        }

        int j = 0;

        for(int i = stock-1, j = 0; i >= 0; i--, j++){

            a[j] = temp[i];
        }
    }

    void print(){

        cout << "Stock\t" << stock << "\n\n";

        for(int c = 0; c < stock; c++){

            a[c].print();
        }
    }



private:

    int size; //size of array
    Rational* a;
    Rational* temp;
    int stock;

};

int main(){
    Queue rational_stack(10);
    float num[10] = {-1,1,2,3,4,5,6,7,8,9};
    float den[10] = {3,5,7,8,5,1,2,5,3,2};

    for(int c = 0; c < 10; c++){

        rational_stack.insert(num[c], den[c]);
    }

    rational_stack.print();

    cout << "----------------" << endl;

    rational_stack.reverse();

    rational_stack.print();


    return 0;
}
