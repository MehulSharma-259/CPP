# include <iostream>
using namespace std;

// Time complexity = No. of tasks in one function call X no. of function calls. O(c X no. of digits)
// Space complexity =  O(d) d = no. of digits.

int sum(int n) {
    if(n / 10 == 0) 
        return n;
    
    return (n % 10) + sum(n / 10);
    
}

int main() {
    int num;
    cin >> num;
    cout << sum(num) << endl;
    return 0;
}