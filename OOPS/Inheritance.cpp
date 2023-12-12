#include <iostream>
using namespace std;

class Parent {
public: // accessible from anywhere in the code.
    int x;

protected: // accessible in own class, parent and derived class.
    int y;

private: // accessible only in own class.
    int z;

};
// public, private and protected are inheritance modes.

class child1: public Parent{ // inheriting Parent publicly.
    // x will remain public.
    // y will remain protected.
    // z will not be accessible.
    
};

class child2: protected Parent{ // inheriting Parent protected.
    // x will be protected.
    // y will be protected.
    // z will not be accessible.

};

class child3: private Parent{ // inheriting Parent privately.
    // x will be private.
    // y will be private.
    // z will not be accessible.

};

int main() {
    Parent var;
    var.x;
    
}