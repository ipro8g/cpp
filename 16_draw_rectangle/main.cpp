#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

void draw_rectangle(int w, int h){

    for(int b = 0; b < h; b++){

        if(b == 0){
            for(int a = 0; a < w; a++){
                cout << "* ";
            }
        }else if(b == h-1){
            for(int a = 0; a < w; a++){
                cout << "* ";
            }
        }else{
            cout << "*                 *";
        }

        cout << "\n";
    }
}

int main(){
    const double pi = 3.141592654;
    const double e = 2.718281828;

    int number;

    draw_rectangle(10, 5);

    return 0;
}
