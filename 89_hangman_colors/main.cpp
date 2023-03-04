#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

int main(){
    char* colors[] = {"blue","yellow","red","green","purple","black","white","orange","gray","wine"};
    char* word;

    int a = 0, result = 0, b = 0, c = 0;
    char res;
    bool flag1 = false;

    unsigned seed;
    seed = time(NULL);
    srand(seed);


    do{

        result = int(rand()/10e7);

        if(result >= 0 && result <= 9){
            break;
        }

    }while(result < 0 || result > 9);

    word = colors[result];

    while(*(word + a)){
        a++;
    }

    char* discover_word = new char[a];

    for(int u = 0; u < a; u++){

        *(discover_word + u) = '_';
    }

    b = a;
    cout << word << endl;
    cout << "Try to guess this word, you have " << a << " fail chances" << endl;

    do{
        cout << endl;

        for(int u = 0; u < a; u++){

            cout << *(discover_word + u) << " ";
        }

        cout << "Enter letter here: ";

        cin >> res;

        for(int u = 0; u < a; u++){

        if(res == *(word + u)){

            *(discover_word + u) = res;
            c++;
            flag1 = true;
        }
        }

        if(flag1){

            cout << "You did guess it" << endl;

            flag1 = false;

            if(c == a){

            cout << "You win" << endl;
            break;
            }

        }else{

            cout << "You did not guess it" << endl;
            b--;

            for(int u = 0; u < a; u++){

                    cout << *(discover_word + u) << " ";
                }

            if(b > 0){

                cout << endl << "You still have " << b << " chances to do it" << endl;
            }else{

                cout << "you lost" << endl;
                break;
            }
        }

        }while(b > 0);

    for(int u = 0; u < a; u++){

            cout << *(discover_word + u) << " ";
    }

    return 0;
}
