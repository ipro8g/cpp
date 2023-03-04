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


//User schema - - - - - - - - - - - - - - -

struct User_struct {
   int size_;
   int id_;
   char user_[100];
   char pass_[100];
};

class User{

public:

        void set_id(int id){

            id_ = id;

        }

        void set_user(char* user){

            user_ = user;
        }

        void set_pass(char* pass){

            pass_ = pass;
        }

        void to_string(){

            cout << "ID: "<< id_ << "\nUsername: " << user_ << "\nPassword: " << pass_ << endl;
        }

        int get_id(){

            return id_;
        }

        char* get_user(){

            return user_;
        }

        char* get_pass(){

            return pass_;
        }


private:

    char* user_;
    char* pass_;

protected:

    int id_;
};

//End user schema - - - - - - - - - - - - - - -

int main(){
    User_struct users_struct[10];

    int res = 0, count1 = 0, j = 0;

    int user_id;
    char user_name[50];
    char user_pass[50];

    char line[50];
    char* words[2];
    char* p;

    char buffer[4096];


    int temp_int;

    char* temp_str;

    char* temp_str2;



    //initializing

    fstream infile;
    infile.open("bin/users.bin", ios::in | ios::binary);

    if(!infile){

        cerr << "Error: input file cannot be opened.\n";
        exit(1);
    }

    infile.seekg(0, ios::beg);
    infile.read((char*)&users_struct, sizeof(users_struct));

    infile.close();

    if(!infile.good()){

      cout << "Error occurred at reading time!" << endl;
      return 1;
    }

    j = users_struct[0].size_;

    cout << "ID" << "\t" << "Username" << "\t" << "Pass" << endl;

    for(int i = 0; i < j; i++){


    cout << users_struct[i].id_ << "\t" << users_struct[i].user_  << "\t" << users_struct[i].pass_  << endl;
    }
    //start console*/

    cout << "VndOS console\n\nTotal: " << j << " users\n\n" << "1)Login\n2)New user\n" << endl;
    cin >> res;

    cin.ignore();

    switch(res){

    case 1:

    //login user
    cout << "\nFor user login\nenter username password here: ";
    cin.getline(line, 100);

    if(*line){

            p = strtok(line, " ");

            while(p){

            words[count1] = p;
            p = strtok(NULL, " ");
            count1++;
            }

            count1 = 0;
    }



    /*for(int p = 0; p < j; p++){

        if(strcmp(words[0], user[p].get_user()) == 0){

            if(strcmp(words[1], users[p].get_pass()) == 0){

                cout << "\nWelcome " << users[p].get_user() << ", select an option:" << endl;
            }else{

                cout << "\nWrong password, try again" << endl;
                exit(1);
            }
        }else{

            cout << "\nUser not found, try again" << endl;
            exit(1);
        }
    }*/

    break;

    case 2:

    //user creation


    cout << "\nFor user registration\nenter username password here: ";
    cin.getline(line, 100);

    if(*line){

            p = strtok(line, " ");

            while(p){

            words[count1] = p;
            p = strtok(NULL, " ");
            count1++;
            }

            count1 = 0;
    }


    //push new user into array

    users_struct[0].size_ = j+1;

    users_struct[j].id_ = j+1;

    strcpy(users_struct[j].user_, words[0]);

    strcpy(users_struct[j].pass_, words[1]);

    cout << "\nThis will be written" << endl;
    cout << "\nID" << "\t" << "User" << "\t" << "Pass" << endl;

    cout << users_struct[j].id_ << "\t" << users_struct[j].user_ << "\t" << users_struct[j].pass_ << endl;

    fstream outfile;
    outfile.open("bin/users.bin", ios::out | ios::binary);

    if(!outfile){
        cerr << "Error: output file could not be opened.\n";
        exit(1);
    }

    outfile.write((char*)&users_struct, sizeof(users_struct));

    outfile.close();

    if(!outfile.good()) {

      cout << "Error occurred at writing time!" << endl;
      exit(1);
    }

    break;
    }

    return 0;
}

