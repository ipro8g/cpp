#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

const int name_length = 20;
const int max_num_names = 25;
const int buffer_length = max_num_names * (name_length + 1);

//read up to 25 string into buffer
void input(char* buffer){

    cout << "Enter up to " << max_num_names << " names, one per line,"
         << " Terminate with \'$\'. \nNames are limited to "
         <<  name_length << " characters.\n";

    cin.getline(buffer, buffer_length, '$');
}

//copies adress of each string in buffer into name array
void tokenize(char** name, int& n, char* buffer){

    char* p = strtok(buffer, "\n"); //p points to each token

    for(n = 0; p && *p != '$'; n++){

        name[n] = p;
        p = strtok(NULL, "\n");
    }
}

//prints the n name stored in buffer
void print(char** name, int n){

    cout << "The names are:\n";

    for(int i = 0; i < n; i++){

        cout << "\t" << i+1 << ". " << name[i] << endl;
    }
}

//sorts the n names stored in buffer
void sort(char** name, int n){

    char* temp;

    for(int i = 1; i < n; i++){

        for(int j = 0; j < n-i; j++){

            if(strcmp(name[j], name[j+1]) > 0){

                temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }
        }
    }
}

int main(){
    char* name[max_num_names];
    char buffer[buffer_length+1];
    int num_names;

    input(buffer);

    tokenize(name, num_names, buffer);

    print(name, num_names);

    sort(name, num_names);

    print(name, num_names);

    return 0;
}
