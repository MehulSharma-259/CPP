#include <iostream>
using namespace std;

class ABC {

    int x; // x is private to this class and no object can directly access the value of x by obj1.x so we define some functions or methods to access value of x.


    public:
    void set(int n) {
        x = n;
    }

    int get() {
        return x;
    }

};

int main() {
    ABC obj1;
    obj1.set(1010);
    cout << obj1.get() << endl;
}