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

//argv[1] = "file.txt"
//argv[0] = "capitalize"
//argc = 2

int main(){
    fstream iofile("file.txt", ios::in | ios::out);

    if(!iofile){
        cerr << "Error: file could not be opened.\n";
        exit(1);

        char c;

        while((c = iofile.get()) != EOF){

            if(islower(c)){

                iofile.seekp(-1, ios::cur);
                iofile.put(toupper(c));
            }

            iofile.close();
        }
    }

    return 0;
}
