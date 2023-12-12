#include <iostream>

void modify_array(int (&arr)[3]) {
    arr[0] = 5;
    arr[1] = 6;
    arr[2] = 7;
}

int main() {
    int arr[3] = {1, 2, 3};
    modify_array(arr);

    std::cout << "Modified array: ";
    for (int i = 0; i < 3; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}