#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Widget{

public:
    Widget(){

        count++;
    }

    ~Widget(){

        count--;
    }

    static int get_num(){

        return count;
    }

private:
    static int count;
};

int Widget::count = 0;

int main(){

    cout << "Now there are " << Widget::get_num() << " widgets.\n";
    Widget w, x;
    cout << "Now there are " << Widget::get_num() << " widgets.\n";

    {
        Widget w, x, y, z;
        cout << "Now there are " << Widget::get_num() << " widgets.\n";
    }

    cout << "Now there are " << Widget::get_num() << " widgets.\n";
    Widget y;
    cout << "Now there are " << Widget::get_num() << " widgets.\n";

    return 0;
}
