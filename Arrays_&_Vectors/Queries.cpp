# include <iostream>
# include <vector>
using namespace std;
int main()
{
    int ilen, queries, element;
    cout << "Enter the length of array : ";
    cin >> ilen;
    
    vector <int> given(ilen);
    
    for (int i = 0 ; i < ilen ; i++)
    {
        cout << "Enter the " << i << "th element : ";
        cin >> given[i];
    }
    const int N = 1e5 + 10;
    vector <int> freqVector(N,0);// Initialize every element by zero

    for (int i = 0 ; i < ilen ; i++)
        freqVector[given[i]]++;

    cout << "Enter number of queries : ";
    cin >> queries;

    while(queries--)
    {
        cout << "Enter the element : ";
        cin >> element;
        cout << "Occurrence : " << freqVector[element] << endl;
    }
    return 0;
}