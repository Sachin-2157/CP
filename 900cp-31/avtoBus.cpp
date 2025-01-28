#include <iostream>
using namespace std;

void calculate_buses(long long n) {
    // Check for impossible cases
    if (n % 2 != 0 || n < 4) {
        cout << -1 << endl; // No solution if n is odd or less than 4
        return;
    }

    // Divide by 2 to work in terms of "half-wheels"
    long long half_n = n / 2;

    // Calculate maximum number of buses (using as many two-axle buses as possible)
    long long max_buses = half_n /2;

    // Calculate minimum number of buses (using as many three-axle buses as possible)
    long long min_buses;
    if (half_n % 3 == 0) {
        min_buses = half_n / 3;
    } else if (half_n % 3 == 2) {
        min_buses = half_n / 3 + 1;  // Add one two-axle bus for the remainder 2
    } else { // half_n % 3 == 1
        min_buses = half_n / 3 + 2;  // Add two two-axle buses for the remainder 1
    }

    // Output the result
    cout << min_buses << " " << max_buses << endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        long long n;
        cin >> n;
        calculate_buses(n);
    }
    return 0;
}
