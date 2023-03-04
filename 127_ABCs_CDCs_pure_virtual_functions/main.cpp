#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Media{

    public:
        virtual void print() =0;
        virtual char* id() =0;

    protected:
        string title;
};

class Book : Media{

    public:

        Book(string a = "", string t = "", string p = "", char* i = "") : author(a), publisher(p), isbn(i){

            title = t;
        }

    void print(){

        cout << title << " by " << author << endl;
    }

    char* id(){

        return isbn;
    }

    private:

        string author, publisher;
        char* isbn;
};

class CD : Media{

    public:

        CD(string t = "", string c = "", string m = "", char* n = "") : composer(c), make(m), number(n){

            title = t;
        }

        void print(){

            cout << title << ", " << composer << endl;
        }

        char* id(){

            return number;
        }

    private:

        string composer, make;
        char* number;
};

class Magazine : Media{

    public:

        Magazine(string t = "", char* i = "", int v = 0, int n = 0) : issn(i), volume(v), number(n){

            title = t;
        }

        void print(){

            cout << title << "Magazine, Vol. " << volume << ", No." << number << endl;
        }

        char* id(){

            return issn;
        }

    private:

        string publisher;
        int volume, number;
        char* issn;
};

int main(){

    Book book("Bjarne Stroustrup", "The C++ Programming Language", "Addison-Wesley", "0-201-53992-6");

    Magazine magazine("TIME", "0040-781X", 145, 23);

    CD cd("Bach cantatas", "Johann Sebastian Bach", "ACHIV", "D120541");

    book.print();

    cout << "\tid: " << book.id() << endl;

    magazine.print();

    cout << "\tid: " << magazine.id() << endl;

    cd.print();

    cout << "\tid: " << cd.id() << endl;

    return 0;
}
