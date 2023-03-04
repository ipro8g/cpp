#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Queue{

public:

    Queue(int s) : size(s){

        stock = 0;
    }

    void insert(int val){

        if(stock < size){

            a[stock] = val;
            stock++;
        }else{

            for(int u = 0; u < stock; u++){

            temp[u] = a[u];
        }

        for(int p = 0; p < stock; p++){

            a[p] = temp[p+1];
        }

        for(int u = 0; u < stock-1; u++){

            temp[u] = a[u];
        }

        a[stock-1] = val;

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

    void print(){

        cout << "Stock\t" << stock << "\n\n";

        for(int c = 0; c < stock; c++){

            cout << a[c] << endl;
        }
    }



private:

    int size; //size of array
    int a[10];
    int temp[10];
    int stock;

};

int main(){
    Queue queue_stack(10);
    float arr[10] = {-1,1,2,3,4,5,6,7,8,9};

    for(int c = 0; c < 10; c++){

        queue_stack.insert(arr[c]);
    }

    cout << "is full?: " << queue_stack.is_full() << endl;
    cout << "is empty?: " << queue_stack.is_empty() << endl;

    /*int remove_index = 3;
    queue_stack.remove(remove_index);*/

    /*queue_stack.print();

    cout << "------------" << endl;

    queue_stack.insert(14);*/

    queue_stack.print();





    return 0;
}
