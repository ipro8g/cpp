#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Stack{

public:

    Stack(int s = 10) : size(s), top(-1){

        a = new int[size];
    }

    ~Stack(){

        delete []a;
    }

    void push(const int& item){

        a[++top] = item;
    }

    int pop(){

        return a[top--];
    }

    int is_empty() const {

        return top == -1;
    }

    int is_full() const {

        return top == (size-1);
    }

private:

    int size; //size of array
    int top; //top of stack
    int* a; //array to hold stack items

};

int main(){

    return 0;
}
