#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>

using namespace std;

int main(){
    int scorea, scoreb, count1 = 0, count2 = 0, reg_a[] = {0,0,0}, reg_b[] = {0,0,0};

    unsigned seed;
    seed = time(NULL);
    srand(seed);

    for(int n = 0; n < 3; n++){
        count1 = 0;
        count2 = 0;

        while(count1 < 3){

            scorea = int(rand()/10e7);

            if(scorea >= 2 && scorea <= 12){

                if(scorea == 7 || scorea == 11){
                    reg_a[n] = scorea;
                    break;
                }

                reg_a[n] = scorea;
                count1++;
            }

        }

        if(scorea == 7 || scorea == 11){
                    break;
        }

        while(count2 < 3){

            scoreb = int(rand()/10e7);

            if(scoreb >= 2 && scoreb <= 12){

                if(scoreb == 7 || scoreb == 11){
                    reg_b[n] = scoreb;
                    break;
                }

                reg_b[n] = scoreb;
                count2++;
            }

        }

        if(scoreb == 7 || scoreb == 11){
                break;
        }

    }

    cout << "\nplayer a: " << reg_a[0] << " " << reg_a[1] << " " << reg_a[2] << endl;
    if((reg_a[0] == 7 || reg_a[0] == 11) || (reg_a[1] == 7 || reg_a[1] == 11) || (reg_a[2] == 7 || reg_a[2] == 11)) cout << " player 1 has win." << endl;
    cout << "\nplayer b: " << reg_b[0] << " " << reg_b[1] << " " << reg_b[2] << endl;
    if((reg_b[0] == 7 || reg_b[0] == 11) || (reg_b[1] == 7 || reg_b[1] == 11) || (reg_b[2] == 7 || reg_b[2] == 11)) cout << " player 2 has win." << endl;
    return 0;
}
