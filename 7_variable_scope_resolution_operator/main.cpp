#include <iostream>
#include <ctype.h>
using namespace std;

int x = 10;

int main(){
    int x = 8;

    {
        int x = 7;
        cout << "inside while loop while x: " << x << endl;
    }

    cout << "inside while loop main x: " << x << endl;
    cout << "inside while loop file x: " << ::x << endl;

    return 0;
}
