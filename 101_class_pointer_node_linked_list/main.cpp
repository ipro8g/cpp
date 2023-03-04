#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

class Node{

public:
    Node(int d, Node* p = 0) : data(d), next(p){}
    int data;
    Node* next;
};

int main(){
    int n;
    Node* p;
    Node* q = 0;

    while(cin >> n){

        p = new Node(n, q);
        q = p;
    }

    for(; p->next; p = p->next){

        cout << p->data << " -> ";
    }

    cout << "*/n";

    return 0;
}
