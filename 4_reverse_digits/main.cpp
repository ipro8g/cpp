#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number, a = 0, b = 0, result = 0, remainder, array_num[100];
    cout << "Enter number to reverse digits here: " << endl;
    cin >> number;

    while(number){

    remainder = number%10;
    number /= 10;

    array_num[a] = remainder;
    a++;

    }


    while(array_num[b]){
        result += array_num[b] * pow(10, a-1);
        b++;
        a--;
    }

    cout << result << endl;



    return 0;
}
