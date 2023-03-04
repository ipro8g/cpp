#include <iostream>
#include <fstream>
#include <strstream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

const double pi = 3.141592654;

int main(){

    ifstream infile("grades.dat", ios::in);

    if(!infile){

        cerr << "Error: input file could not be opened.\n";
        exit(1);
    }

    char id[9], name[16];
    int grade, sum = 0, count = 0;

    while(infile >> id >> name >> grade){

        sum += grade;
        ++count;
    }

    infile.close();
    cout << "The grade average is " << float(sum)/count << endl;

    return 0;
}
