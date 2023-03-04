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

    ofstream outfile("grades.dat", ios::out);

    if(!outfile){
        cerr << "Error: output file could not be opened.\n";
        exit(1);
    }

    char id[9], name[16];
    int grade;

    cout << "\t1: ";

    int n = 1;
    while(cin >> id >> name >> grade){

        outfile << name << " " << id << " " << grade << endl;
        cout << "\t" << ++n << ": ";
    }

    outfile.close();

    return 0;
}
