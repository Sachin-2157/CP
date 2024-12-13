#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Sort the array
    sort(a.begin(), a.end());
    
    
    vector<int> b, c;
    b.push_back(a[0]); 
    for (int i = 1; i < n; ++i) {
        if (a[i] % b[0] != 0) {
            b.push_back(a[i]);
        } else {
            c.push_back(a[i]);
        }
    }
    
    // Ensure both arrays are non-empty
    if (b.size() > 0 && c.size() > 0) {
        // Output the sizes of b and c
        cout << b.size() << " " << c.size() << endl;
        
        // Output array b
        for (int x : b) {
            cout << x << " ";
        }
        cout << endl;
        
        // Output array c
        for (int x : c) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        solve();
    }
    
    return 0;
}
