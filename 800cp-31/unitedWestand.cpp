#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n = 0;
    cin >> n; // Read the number of elements
    vector<int> inp(n); // Initialize vector of size n
    for (auto& x : inp) cin >> x; // Input all elements

    sort(inp.begin(), inp.end()); // Sort the array

    // Check if all elements are the same
    if (inp.back() == inp[0]) {
        cout << "-1\n"; // If all are the same, output -1
        return;
    }
    
    int it = 0;
    // Find the first occurrence of an element different from inp[0]
    while (inp[it] == inp[0]) it++;

    // Output the counts of both distinct parts
    cout << it << " " << n - it << "\n";
    
    // Output the first part (all equal elements)
    for (int j = 0; j < it; ++j) cout << inp[j] << " ";
    
    // Output the second part (remaining distinct elements)
    for (int j = it; j < n; ++j) cout << inp[j] << " ";
    cout << "\n"; // End the line
}

int main() {
    ios_base::sync_with_stdio(false); // For faster input/output
    cin.tie(NULL); // Disable the synchronization with C-style I/O
    
    int t = 0;
    cin >> t; // Read the number of test cases
    while (t--) solve(); // Solve each test case
    return 0;
}
