# include <iostream>
using namespace std;

// Single inheritance. 

class Parent_single {
public:
    Parent_single() {
        cout << "Parent_single class" << endl;
    }
};

class child: public Parent_single {
public:
    child() {
        cout << "child class" << endl;
    }
};

// Multi-level inheritance. 

class grandParent {
public:
    grandParent() {
        cout << "grandParent Class" << endl;
    }
};

class Parent_m: public grandParent{
public:
    Parent_m() {
        cout << "Parent_m class" << endl;
    }
};

class child_m: public Parent_m {
public:
    child_m() {
        cout << "child_m class" << endl;
    }
};

// Multiple inheritance
// here one child is inheriting its properties from multiple parent
// class child: public parent1, public parent2{};

// Hierarchical inheritance
// multiple child inheriting its properties from single parent.

// Hybrid inheritance
// combination of both multiple and multilevel inheritance.


// Diamond problem


int main() {
    child_m c;
}