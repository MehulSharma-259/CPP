# include <iostream>
using namespace std;

// Time complexity = No. of tasks in one function call X no. of function calls. O(c X q).
// Space complexity =  O(q).

int power(int p, int q) {
    if(q == 0)
        return 1;
    
    return p * power(p, q - 1);
}

int powerOptimised(int n, int q) {

    if (q == 1) 
        return n;

    if(q % 2 == 0) {
        int result = powerOptimised(n, q / 2);
        return  result * result;
    }

    else {
        int result = powerOptimised(n, q / 2);
        return n * result * result;
    }
}

int main() {
    int num, exponent;
    cin >> num >> exponent;
    cout << power(num, exponent) << endl;
    return 0;
}