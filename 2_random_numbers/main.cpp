#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    int arr[3] = {0,0,0}, a = 0, result, op = 0, flag = 0;

    unsigned seed;
    seed = time(NULL);
    srand(seed);

    while(a<3){

        result = int(rand()/10e8);

        if(result <= 1 && result >= 0){

                if(flag){
                arr[a] = 0;
                a++;
                continue;
                }

                if(result == 1){
                    flag = 1;
                }

                arr[a] = result;
                a++;

        }
    }

    do{

    cout << "select door 1 2 or 3" << endl;
    cin >> op;

    if(arr[op-1]){
        break;
    }

    cout << "wrong" << endl;


    }while(!arr[op-1]);

    cout << "you win the car is on door: " << op << endl;
    cout << arr[0] << arr[1] << arr[2];

    return 0;
}
