#include <iostream>
using namespace std;

int main(){
    int number, a = 0, root;
    cout << "Enter number to find its square root here: " << endl;
    cin >> number;

    for(a = 0; a*a < number; a++){
        ;
    }
    cout << number << " square is: " << a;
    return 0;
}
