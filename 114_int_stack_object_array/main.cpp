#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Stack{

public:

    Stack(int s) : size(s), top(-1){

        a = new int[size];
        stock = 0;
    }

    ~Stack(){

        delete []a;
    }

    void push(const int& item){

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

        int c = 0;

        while(a[c]){
            c++;
        }

        return c;
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
    int* a; //array to hold stack items
    int stock;

};

int main(){
    Stack stack_o(10);

    int nums[8] = {0,1,2,3,4,6,8,9};
    int i = 0;

    while(i < 8){

        stack_o.push(nums[i]);
        i++;
    }

    stack_o.print();
    return 0;
}
