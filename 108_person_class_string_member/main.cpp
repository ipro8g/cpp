#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>

using namespace std;

const double pi = 3.141592654;

const unsigned long mult_ = 234567821;
const unsigned long mod_ = ULONG_MAX; //4294967295
const int max_ = INT_MAX;   //2147483647

class Person{

public:

    Person(char* name, int birth, int death) : name_(name), birth_(birth), death_(death){
    }

    ~Person(){
        cout << "Person has been deallocate" << endl;
    }

    char* get_name(){

        return name_;
    }

    int get_birth(){

        return birth_;
    }

    int get_death(){

        return death_;
    }

    void print(){
        cout << "Name: " << name_ << "\nBirth: " << birth_ << "\nDeath: " << death_ << endl;
    }

private:
    char* name_;
    int birth_;
    int death_;

};

int main(){
    Person me("AG Ramirez", 1989, 2089);
    cout << "Name: " << me.get_name() << "\nBirth: " << me.get_birth() << "\nDeath: " << me.get_death() << endl;
    me.print();

    return 0;
}
