#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>

using namespace std;

const double pi = 3.141592654;


class String{

public:

    String(char* content, int length) : content_(content), length_(length){
        cout << "string has been created" << endl;
    }

    ~String(){
        cout << "String has been deallocated" << endl;
    }

    int get_length(){

        return length_;
    }

    char* get_content(){

        return content_;
    }

    void print(){

        cout << "Length: " << length_ << "\nContent: " << content_ << endl;
    }

private:
    char* content_;
    int length_;

};

int main(){

    char word[100];

    cout << "Enter a text line: ";
    cin.getline(word, 100);



    int len = strlen(word);
    String str(word, len);
    cout  << str.get_content() << endl;
    cout  << str.get_length() << endl;
    //str.print();


    //copy constructor
    String another_str(str);

    another_str.print();
    return 0;
}
