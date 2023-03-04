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

    Person(char* name, int birth, int death, char* social_number, float salary, float tax_rate, char* address) : name_(name), birth_(birth), death_(death), social_number_(social_number), salary_(salary), tax_rate_(tax_rate), address_(address){
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

    bool is_living(int current_year){

        if(death_ > current_year){

            return true;
        }else{

            return false;
        }
    }

    float tax(){

        return (tax_rate_/100)*salary_;
    }

    void print(){
        cout << "Employee Name: " << name_ << "\nBirth: " << birth_ << "\nDeath: " << death_ << "\nSocial number: " << social_number_ << "\nSalary: " << salary_  << "\nTax paid: " << tax() << "\nAddress: " << address_ <<endl;
    }

private:
    char* name_;
    char* social_number_;
    char* address_;
    float salary_;
    float tax_rate_;
    int birth_;
    int death_;

};

int main(){
    Person employee("AG Ramirez", 1989, 2089, "F4082A", float(230000), float(8), "PARC California N0000");
    employee.print();

    if(employee.is_living(2021)){

        cout << "this person is currently living" << endl;
    }else{

        cout << "this person is currently death" << endl;
    }
    return 0;
}
