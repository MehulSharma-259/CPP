#include <iostream>
#include <vector>
using namespace std;
void prefixSum(vector <int> &);
int main()
{
    int size;
    vector <int> v;
    cout << "Enter the size : ";
    cin >> size;

    for (int i = 0 ; i < size ; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    prefixSum(v);
    return 0;
}
void prefixSum(vector <int> &vect)
{
    for (int i = 1 ; i < vect.size() ; i++)
        vect[i] += vect[i - 1];

    for (int i = 0 ; i < vect.size() ; i++)
        cout << vect[i] << " ";

    cout << endl;
}