#include <iostream>

using namespace std;

class X; 

class Y {
public:
    int g(X* p);  
};

class Z {
public:
    int add5(X* p);   
};
int h(X* p);

class X {
private:
    int i;

public:
    X(int v = 0) : i(v) {}
    int get() const { return i; }

    friend int Y::g(X* p);   
    friend class Z;          
    friend int h(X* p);     
};

int Y::g(X* p) {
    p->i += 1;               
    return p->i;
}

int Z::add5(X* p) {
    p->i += 5;
    return p->i;
}

int h(X* p) {
    p->i += 10;
    return p->i;
}

int main() {
    X x(5);       
    Y y;
    Z z;

    cout << y.g(&x) << endl;      
    cout << z.add5(&x) << endl;   
    cout << h(&x) << endl;        
    cout << x.get() << endl;     
}
