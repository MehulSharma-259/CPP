#include <iostream>
using namespace std;

class Fruit {
public: // To make this accessible to all functions.

    string Name;
    string Color;

};

int main() {
    Fruit apple; // variable of particular class type is called objects and it is the declaration of object named apple of fruit type.

    apple.Name = "Apple"; // apple.name is accessing the Name property of class Fruit and assigning "Apple" to it.
    apple.Color = "Red";

    Fruit *Mango = new Fruit(); // the new keyword dynamically allocate memory for an object of the Fruit class and assigns the address of this dynamically allocated object to the pointer variable Mango.

    Mango->Name = "Mango"; // accessing is done by -> 
    Mango->Color = "Yellow";

    // printing
    cout << apple.Name << " - " << apple.Color << endl; 
    cout << Mango->Name << " - " << Mango->Color << endl;

    return 0;

}