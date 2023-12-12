#include <iostream>
using namespace std;

int sum_in_range_optimized(int x, int y) {
    int n = y - x + 1;
    int a = x;
    int d = 1;
    int result = (n * (2 * a + (n - 1) * d) /  2);
    return result;
}


int main() {
    int x, y;
    // cin >> x >> y;
    cout << sum_in_range_optimized(1, 100000);
    return 0;
}