#include <iostream>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

const double pi = 3.141592654;

template <class T>
class Vector{
public:
    Vector(unsigned n = 8) : sz(n), data(new T[sz]){}

    Vector(const Vector<T>& v) : sz(v.sz), data(new T[sz]){

        copy(v);
    }
    ~Vector(){

        delete [] data;
    }

    Vector<T>& operator = (const Vector<T>&);

    T& operator[](unsigned i) const{

        return data[i];
    }

    unsigned size(){

        return sz;
    }

protected:
    T* data;
    unsigned sz;
    void copy(const Vector<T>&);
};

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v){
    sz = v.sz;
    data = new T[sz];
    copy(v);
    return *this;
}

template<class T>
void Vector<T>::copy(const Vector<T>& v){

    unsigned min_size = (sz < v.sz ? sz : v.sz);

    for(int i = 0; i < min_size; i++){

        data[i] = v.data[i];
    }
}

template <class T>
class Array : public Vector<T>{
public:
    Array(int i, int j) : i0(i), Vector<T>(j-i+1){}

    Array(const Array<T>& v) : i0(v.i0), Vector<T>(v){}

    T& operator[] (int i) const {

        return Vector<T>::operator[](i-i0);
    }

    int first_subscript() const {

        return i0;
    }

    int last_subscript() const {

        return i0+sz-1;
    }

protected:
    int i0;
};

int main(){

    Vector<short> v;
    v[5] = 127;
    Vector<short> w  =  v,  x(3);
    cout<<  w.size();

    return 0;
}
