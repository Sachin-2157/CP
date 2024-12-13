#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t; // Input number of test cases
    while (t--) {
        int n;
        cin >> n; // Input length of the array
        map<int, int> frequency; // Map to store the frequency of each number

        // Read each element and count its occurrences
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            frequency[x]++; // Increase count for the number x
        }

        // If there are 3 or more distinct numbers, the answer is "No"
        if (frequency.size() >= 3) {
            cout << "No" << endl;
        } else {
            // If the frequency difference between two numbers is at most 1, the answer is "Yes"
            auto first = frequency.begin();  // First number in the map
            auto last = frequency.rbegin();  // Last number in the map
            
            if (abs(first->second - last->second) <= 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
