// use of this

// this stores the address of current object.

// Rectangle(length) {
    // length = length; (it tells that we are updating the value of length variable which is local to constructor.)
    // this -> length = length; (this stores the address of current object which is r1 and by doing this -> length we refer to data member "length" of class Rectangle similar to (*this).length)
// }

# include <iostream>
using namespace std;

class Rectangle{
public:

    int length;
    int breadth;

// if we not define a constructor compiler creates a default constructor and if we define a constructor compiler removes its constructor.
// if we define a parameterized constructor then also the default constructor dies.
// same for the copy constructor
// () can be dropped while allocating memory dynamically (by using new keyword) for creating a new object.



    Rectangle() { // default constructor - no arguments passed.
        length = 999;
        breadth = 999;
    }

    Rectangle(int x, int y) { // parameterized constructor - arguments passed.
        
        length = x;
        breadth = y;
    }

    Rectangle(Rectangle &r) { // copy constructor - copies the value of one object to another.
        length = r.length;
        breadth = r.breadth;
    }

    ~Rectangle() { // destructor
        cout << "destructor is called" << endl;
    }
};

int main() {

    Rectangle r1; // calls the default constructor as no arguments are passed. (can be assumed that r1.Rectangle)
    cout << r1.length << " " << r1.breadth << endl;

    Rectangle *r4 = new Rectangle(); // calls the default constructor as no arguments are passed.
    cout << r4->length << " " << r4->breadth << endl; 
    delete r4; // delete can only be used on pointers.

    Rectangle r2(10, 15); // calls the default constructor as argument are passed.
    cout << r2.length << " " << r2.breadth << endl;

    Rectangle r3(r2);
    cout << r3.length << " " << r3.breadth << endl;


    return 0;
}