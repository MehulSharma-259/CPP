#include <iostream>
using namespace std;

void rotateArray(int length, int *a, int rotate)
{
    int temp;

    cout << "Unrotated array is : ";

    for (int k = 0; k < length; k++)
        cout << a[k] << " ";

    cout << endl;

    for (int j = 0; j < rotate; j++)
    {
        temp = a[length - 1];
        for (int i = length - 1; i >= 0; i--)
        {
            if ((i - 1) < 0)
                a[0] = temp;

            else
                a[i] = a[i - 1];
        }
    }
    cout << "Rotated array is : ";

    for (int k = 0; k < length; k++)
        cout << a[k] << " ";

    cout << endl;
}
int main()
{
    int size, steps;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << "th element : ";
        cin >> arr[i];
    }
    cout << "Enter the number of steps you want to rotate : ";
    cin >> steps;
    steps = size % steps; // As rotation can be greater than length
    rotateArray(size, arr, steps);
    return 0;
}
