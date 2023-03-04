#include <iostream>
#include <fstream>
#include <strstream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

//- - - - - - - - - - - - - R E A D  -  M E - - - - - - - - - - - - - - - - - - - - - - -

// in user registration you will be asked for
// enter username password here: your_user your_password
// in the same line then press enter
// must be entered this way, otherwise it will produce an error

// in product registration you will be asked for
// enter name code here: product_name product_code
// in the same line then press enter
// use underscores instead of blankspaces in both fields
// must be entered this way, otherwise it will produce an error

//- - - - - - - - - - - - - R E A D  -  M E - - - - - - - - - - - - - - - - - - - - - - -

//int custom codes
//16: OK, true -------- 25: NOT OK, false

//Binary Schemas - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

struct Product_struct {
   int not_empty_;
   int size_; // the 0 position stores array length of entire structure
   int user_id_;
   char name_[100];
   char code_[50];
   float price_;
};

struct User_struct {
   int size_; // the 0 position stores array length of entire structure
   int id_;
   char user_[100];
   char pass_[100];
};

//function prototypes - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int login_user();

int user_creation();

void dashboard(int, User_struct[]);

int product_man(int);

int product_reg(int);

int product_list(int);

int product_update(int);

int save_product(int, int);

int product_delete(int);

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int main(){
    User_struct users_struct[10];

    int res = 0, count1 = 0, j = 0;

    int user_id;
    char user_name[50];
    char user_pass[50];

    char line[50];
    char* words[2];
    char* p;


    int temp_int;

    char* temp_str;

    char* temp_str2;

    fstream infile;
    infile.open("users.bin", ios::in | ios::binary);

    if(infile){

//initializing - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    infile.seekg(0, ios::beg);
    infile.read((char*)&users_struct, sizeof(users_struct));

    infile.close();

    if(!infile.good()){

      cout << "Error occurred at reading time!" << endl;
      return 1;
    }

    j = users_struct[0].size_;

    cout << "ID" << "\t" << "Username" << "\t" << "Pass" << endl;
    cout << users_struct[0].id_ << "\t" << users_struct[0].user_  << "\t" << users_struct[0].pass_  << endl;

    for(int i = 1; i < j; i++){


    cout << users_struct[i].id_ << "\t" << users_struct[i].user_ << endl;
    }

    cout << endl;

// Start console - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    }else if(!infile){
        cout << "\nInitializing dir/users.bin"<< endl;
    }

    cout << "VndOS console\n\nTotal: " << j << " users\n\n" << "1)Login\n2)New user\n" << endl;
    cin >> res;

    cin.ignore();

    switch(res){

    case 1:

        if(login_user() == 16){

            return 16;
        }else{

            exit(25);
        }


    break;

    case 2:

    if(user_creation() == 16){

        cout << "\nYou can login now" << endl;
        login_user();
    }else{

        exit(25);
    }


    break;
    }

    return 16;
}

// Login user - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int login_user(){

    User_struct users_struct[10];

    int count1 = 0;
    int flag1 = 25;
    int j;

    char line[50];
    char* words[1];
    char* p;

    fstream infile;
    infile.open("users.bin", ios::in | ios::binary);

    if(infile){

    infile.seekg(0, ios::beg);
    infile.read((char*)&users_struct, sizeof(users_struct));

    infile.close();

    if(!infile.good()){

      cout << "Error occurred at reading time!" << endl;
      return 1;
    }
    }

    j = users_struct[0].size_;

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

    for(int u = 0; u < j; u++){

        if(strcmp(words[0], users_struct[u].user_) == 0){

            if(strcmp(words[1], users_struct[u].pass_) == 0){

                dashboard(u, users_struct);

            }else{

                cout << "\nWrong password, try again" << endl;
                return 25;
            }

            flag1 = 16;
        }
    }

    if(flag1 == 25){

        cout << "\nUser not found, try again" << endl;
        return 25;
    }


    return 16;
}

// User creation - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int user_creation(){

    User_struct users_struct[10];

    int count1 = 0;
    int j;

    char line[50];
    char* words[1];
    char* p;

    fstream infile;
    infile.open("users.bin", ios::in | ios::binary);

    if(infile){

//initializing - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    infile.seekg(0, ios::beg);
    infile.read((char*)&users_struct, sizeof(users_struct));

    infile.close();

    if(!infile.good()){

      cout << "Error occurred at reading time!" << endl;
      return 25;
    }
    }

    j = users_struct[0].size_;

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

    for(int u = 0; u < j; u++){

        if(strcmp(words[0], users_struct[u].user_) == 0){

            cout << "\nThis username exists, try again" << endl;
            return 25;
        }
    }


// Push new user into array - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    users_struct[0].size_ = j+1;

    users_struct[j].id_ = j+1;

    strcpy(users_struct[j].user_, words[0]);

    strcpy(users_struct[j].pass_, words[1]);

    int user_length = strlen(users_struct[j].user_);
    int pass_length = strlen(users_struct[j].pass_);


    for(int g = 0; g < user_length; g++){

            if((isalpha(users_struct[j].user_[g]) == 0) && (isdigit(users_struct[j].user_[g]) == 0)){

                cout << "\nError, only alphanumeric is allowed, try again" << endl;
                return 25;
            }
    }

    for(int h = 0; h < pass_length; h++){

            if((isalpha(users_struct[j].pass_[h]) == 0) && (isdigit(users_struct[j].pass_[h]) == 0)){

                cout << "\nError, only alphanumeric is allowed, try again" << endl;
                return 25;
            }
    }

// Save new user into binary file - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    fstream outfile;
    outfile.open("users.bin", ios::out | ios::binary);

    if(!outfile){
        cerr << "Error: output file could not be opened.\n";
        return 25;
    }

    outfile.write((char*)&users_struct, sizeof(users_struct));

    outfile.close();

    if(!outfile.good()) {

      cout << "Error occurred at writing time!" << endl;
      return 25;
    }

    if(outfile.good()) {

      cout << "\n\nUser successfully registered\nID: " <<  users_struct[j].id_ << "\nUsername: " << users_struct[j].user_ << endl;
      return 16;
    }
}

// Product Management - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int product_man(int id){

    int res, n_products = 0, count1 = 0, total_products = 0;

    char line[100];
    char* words[3];
    char* p;

    float price;

    Product_struct products_struct[1000];

    fstream infile;
    infile.open("products.bin", ios::in | ios::binary);

    if(infile){

//initializing - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    infile.seekg(0, ios::beg);
    infile.read((char*)&products_struct, sizeof(products_struct));

    infile.close();

    if(!infile.good()){

      cout << "Error occurred at reading time!" << endl;
      return 25;
    }

   for(int k = 0; k < 1000; k++){

        if(products_struct[k].not_empty_ == 16){

            total_products++;
        }

        if(products_struct[k].user_id_ == id && products_struct[k].not_empty_ == 16){

            n_products++;
        }
    }


    }

    cout << "\nTotal " << n_products << " products\n" << endl;

    cout << "\nSelect Option\n\n1) List all products\n2) Register products\n3) Update products\n4) Delete products\n5) Exit\n\n" << endl;

    cin >> res;

    switch(res){

        case 1:

            if(n_products == 0){

                cout << "\nregister products first, try again." << endl;
                return 25;
            }else{

                if(product_list(id) == 16){

                    product_man(id);
                }else{
                    cout << "\nan error has occurred, try again." << endl;
                    exit(25);
                }
            }


        break;

        case 2:

            if(product_reg(id) == 16){

                product_man(id);
            }else{
                cout << "\nan error has occurred, try again." << endl;
                exit(25);
            }

        break;

        case 3:

            if(product_update(id) == 16){

                product_man(id);
            }else{
                cout << "\nan error has occurred, try again." << endl;
                exit(25);
            }

        break;

        case 4:

            if(product_delete(id) == 16){

                product_man(id);
            }else{
                cout << "\nan error has occurred, try again." << endl;
                exit(25);
            }

        break;

        case 5:

            cout << "\nHave a Nice Day!" << endl;
            exit(16);
        break;

        default:
            cout << "\nnot valid option, try again." << endl;
            exit(25);
        break;
    }

    return 16;
}

// Dashboard - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

void dashboard(int id, User_struct users_struct[10]){
    int res;

    cout << "\nWelcome: " << users_struct[id].user_ << "\nSelect section:\n\n1) Product Management\n" << endl;

    cin >> res;

    switch(res){

        case 1:
        product_man(id);
        break;

        default:
            cout << "\nNot valid option" << endl;
            exit(25);
        break;
    }
}

// Product registration - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int product_reg(int id){

    int n_products = 0, count1 = 0, total_products = 0;

    char line[100];
    char* words[3];
    char* p;

    float price;

    Product_struct products_struct[1000];

    fstream infile;
    infile.open("products.bin", ios::in | ios::binary);

    if(infile){

    infile.seekg(0, ios::beg);
    infile.read((char*)&products_struct, sizeof(products_struct));

    infile.close();

    if(!infile.good()){

      cout << "Error occurred at reading time!" << endl;
      return 25;
    }

   for(int k = 0; k < 1000; k++){

        if(products_struct[k].not_empty_){

            total_products++;
        }

        if(products_struct[k].user_id_ == id && products_struct[k].not_empty_ == 16){

            n_products++;
        }
    }
    }


            cout << "\nEnter price here: ";
            cin >> price;

            cin.ignore();

            cout << "\nEnter name code here: ";
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

            for(int u = 0; u < 1000; u++){

                if(strcmp(words[1], products_struct[u].code_) == 0 && products_struct[u].user_id_ == id && products_struct[u].not_empty_ == 16){

                    cout << "\nThis code exists, try again" << endl;
                    return 25;
                }
            }


            products_struct[0].size_ = total_products + 1;
            products_struct[total_products].price_ = price;
            strcpy(products_struct[total_products].name_, words[0]);
            strcpy(products_struct[total_products].code_, words[1]);
            products_struct[total_products].user_id_ = id;
            products_struct[total_products].not_empty_ = 16;

            fstream outfile;
            outfile.open("products.bin", ios::out | ios::binary);

            if(!outfile){
                cerr << "Error: output file could not be opened.\n";
                return 25;
            }

            outfile.write((char*)&products_struct, sizeof(products_struct));

            outfile.close();

            if(!outfile.good()) {

            cout << "Error occurred at writing time!" << endl;
            return 25;
            }

            if(outfile.good()) {

            cout << "Product successfully registered\n\nName: " <<  products_struct[total_products].name_ << "\nCode: " << products_struct[total_products].code_ << "\nPrice: " << products_struct[total_products].price_<< "\n" << endl;
            return 16;
            }
}

// All user products - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int product_list(int id){

    Product_struct products_struct[1000];

    fstream infile;
    infile.open("products.bin", ios::in | ios::binary);

    if(infile){

    infile.seekg(0, ios::beg);
    infile.read((char*)&products_struct, sizeof(products_struct));

    infile.close();

    if(!infile.good()){

      cout << "Error occurred at reading time!" << endl;
      return 25;
    }

   cout << "\nName\tCode\tPrice\n" << endl;

   for(int k = 0; k < 1000; k++){

        if(products_struct[k].user_id_ == id && products_struct[k].not_empty_ == 16){

            cout << products_struct[k].name_ << "\t" << products_struct[k].code_ << "\t" << products_struct[k].price_ << endl;
        }

    }
    }

    return 16;
}

// Product update - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int product_update(int id){

    int flag1 = 0, res;
    char code[50];
    char new_name[100];

    Product_struct products_struct[1000];

    fstream infile;
    infile.open("products.bin", ios::in | ios::binary);

    if(infile){

    infile.seekg(0, ios::beg);
    infile.read((char*)&products_struct, sizeof(products_struct));

    infile.close();

    if(!infile.good()){

      cout << "Error occurred at reading time!" << endl;
      return 25;
    }
    }

    cout << "\nEnter product code here: ";
    cin >> code;

    for(int k = 0; k < 1000; k++){

        if(products_struct[k].user_id_ == id && products_struct[k].not_empty_ == 16){

            if(strcmp(products_struct[k].code_, code) == 0 && products_struct[k].user_id_ == id && products_struct[k].not_empty_ == 16){

                flag1 = 16;
                cout << "\nProduct found" << endl;
                cout << "\nName\tCode\tPrice\n" << endl;
                cout << products_struct[k].name_ << "\t" << products_struct[k].code_ << "\t" << products_struct[k].price_ << endl;

                cout << "\nSelect an option:" << endl;
                cout << "\n1)Update Name\n2)Update Code\n3)Update Price\n" << endl;
                cin >> res;


                        if(save_product(k, res) == 16){

                            product_man(id);
                        }else{

                            cout << "\nan error has occurred, try again." << endl;
                            exit(25);
                        }
            }
        }
    }

    if(flag1 != 16){

        cout << "\no products found with code: " << code << endl;
        return 25;
    }

    return 16;
}

// Save product into binary file - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int save_product(int k, int res){

            char new_name[100];
            float new_price;
            char new_code[50];

            Product_struct products_struct[1000];

            fstream infile;
            infile.open("products.bin", ios::in | ios::binary);

            if(infile){

            infile.seekg(0, ios::beg);
            infile.read((char*)&products_struct, sizeof(products_struct));

            infile.close();

            if(!infile.good()){

            cout << "Error occurred at reading time!" << endl;
            return 25;
            }
            }

            switch(res){

                case 1:

                cout << "\nEnter new name here: ";
                cin >> new_name;
                strcpy(products_struct[k].name_, new_name);

                break;

                case 2:

                cout << "\nEnter new code here: ";
                cin >> new_code;
                strcpy(products_struct[k].code_, new_code);

                break;

                case 3:

                cout << "\nEnter new price here: ";
                cin >> new_price;
                products_struct[k].price_ = new_price;

                break;
            }

            fstream outfile;
            outfile.open("products.bin", ios::out | ios::binary);

            if(!outfile){
                cerr << "Error: output file could not be opened.\n";
                return 25;
            }

            outfile.write((char*)&products_struct, sizeof(products_struct));

            outfile.close();

            if(!outfile.good()) {

            cout << "Error occurred at writing time!" << endl;
            return 25;
            }

            if(outfile.good()) {

            cout << "Name successfully updated" << endl;
            return 16;
            }
}

// Delete product - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

int product_delete(int id){

    char code[50];

    product_list(id);

    cout << "\nEnter product code here: ";
    cin >> code;

    Product_struct products_struct[1000];

    fstream infile;
    infile.open("products.bin", ios::in | ios::binary);

    if(infile){

    infile.seekg(0, ios::beg);
    infile.read((char*)&products_struct, sizeof(products_struct));

    infile.close();

    if(!infile.good()){

    cout << "Error occurred at reading time!" << endl;
    return 25;
    }
    }

    for(int k = 0; k < 1000; k++){

        if((strcmp(products_struct[k].code_, code) == 0) && products_struct[k].user_id_ == id && products_struct[k].not_empty_ == 16){

            products_struct[k].not_empty_ = 25;
            products_struct[0].size_--;
        }
    }




    fstream outfile;
    outfile.open("products.bin", ios::out | ios::binary);

    if(!outfile){
        cerr << "Error: output file could not be opened.\n";
        return 25;
    }

     outfile.write((char*)&products_struct, sizeof(products_struct));

     outfile.close();

     if(!outfile.good()) {

     cout << "Error occurred at writing time!" << endl;
     return 25;
     }

     if(outfile.good()) {

     cout << "Name successfully deleted" << endl;
     return 16;
     }
}



