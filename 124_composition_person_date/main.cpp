#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Date{
    friend istream& operator >> (istream& in, Date& x){
        in >> x.month >> x.day >> x.year;
    }

    friend ostream& operator << (ostream& out, const Date& x){
        static char* month_name[13] = {"",
                                       "January",
                                       "February",
                                       "March",
                                       "April",
                                       "May",
                                       "June",
                                       "July",
                                       "August",
                                       "September",
                                       "October",
                                       "November",
                                       "December"};

        out << month_name[x.month] << ", " << x.day << ", " << x.year;
        return out;
    }

public:
    Date(int m = 0, int  d = 0, int y = 0) : month(m), day(d), year(y){}

    void set_date(int m, int d, int y){
            month = m;
            day = d;
            year = y;
    }
private:
    int month, day, year;
};

class Person{

public:
    Person(char* n = "", int s = 0, char* nat = "U.S.A.") : name(n), sex(s), nat_(nat){}

        void set_dob(int m, int d, int y){

            dob.set_date(m, d, y);
        }
        void set_dod(int m, int d, int y){

            dod.set_date(m, d, y);
        }
        void print_name(){

            cout << name;
        }
        void print_nationality(){

            cout << nat_;
        }
        void print_dob(){

            cout << dob;
        }
        void print_dod(){

            cout << dod;
        }

private:

    string name, nat_;
    Date dob, dod;
    int sex;
};

int main(){

    Person author("Thomas Jefferson", 1);
    author.set_dob(4, 13, 1743);
    author.set_dod(7, 4, 1826);

    cout << "The author of Independence Declaration was: ";
    author.print_name();

    cout << "\nHe was born on: ";
    author.print_dob();

    cout << "\nAnd died on: ";
    author.print_dod();

    return 0;
}
