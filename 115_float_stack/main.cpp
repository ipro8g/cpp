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

        a = new float[size];
        stock = 0;
    }

    ~Stack(){

        delete []a;
    }

    void push(const float& item){

        a[++top] = item;
        stock++;
    }

    int pop(){

        return a[top--];
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

            cout << a[c] << endl;
            c++;
        }
    }

private:

    int size; //size of array
    int top; //top of stack
    float* a; //array to hold stack items
    int stock;

};

int main(){
    Stack float_stack(10);

    float nums[8] = {0,1,2,3,4,6,8,9};
    int i = 0;

    while(i < 8){

        float_stack.push(nums[i]);
        i++;
    }

    float_stack.print();
    return 0;
}
