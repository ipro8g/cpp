#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

template<class T>
class Stack{

    public:
    Stack(int s = 100) : size(s), top(-1){

        data = new T[size];

    }

    ~Stack(){
        delete [] data;

    }

    void push(const T& x) {

         data[++top] = x;
    }

    T pop(){

        return data[top--];
    }

    int is_empty() const {

        return top == -1;
    }

    int is_full() const {

        return top == size + 1;
    }

    private:

        int size;
        int top;
        T* data;
};

int main(){

    Stack<int> int_stack(5);
    Stack<int> int_stack2(10);
    Stack<char> char_stack(8);

    int_stack.push(77);
    char_stack.push('A');
    int_stack2.push(22);
    char_stack.push('E');
    char_stack.push('K');
    int_stack2.push(44);

    cout << int_stack2.pop() << endl;
    cout << int_stack2.pop() << endl;

    if(int_stack2.is_empty()){

        cout << "int_stack2 is empty.\n";
    }

    return 0;
}
