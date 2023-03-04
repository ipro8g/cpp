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

        void print_some(){

        cout << "\nthis will be printed from the super class" << endl;
    }

private:

    string name, nat_;
    Date dob, dod;
    int sex;

//accesible from the class and subclasses
protected:

    int s_id;
};

class Student : public Person{

public:

    Student(char* n, int s = 0, char* i = "") : Person(n, s), id(i), credits(0){}

    void set_dom(int m, int d, int y){

        dom.set_date(m, d, y);
    }

    void print_dom(){

        cout << dom;
    }

    //access to the superclass protected member
    void set_id(int num){

        s_id = num;
    }

    //access to the superclass protected member
    int get_id(){

        return s_id;
    }

    void print_some(){

        cout << "\nthis will be printed from the inherited class" << endl;
    }

private:

    string id;
    Date dom;
    int credits;
    float gpa;
};

int main(){

    Student x("Ann Jones", 0, "219360061");
    x.set_dob(5, 13, 1977);
    x.set_dom(8, 29, 1995);
    x.print_name();

    cout << "\nBorn: ";
    x.print_dob();

    cout << "\nMatriculated: ";
    x.print_dom();

    int id;

    cout << "\nEnter id here: ";
    cin >> id;

    x.set_id(id);

    cout << "\n" << x.get_id() << endl;

    //method overriding

    x.Person::print_some(); // access to the super class

    x.print_some();

    return 0;
}
