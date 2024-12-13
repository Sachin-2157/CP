
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];  // Input the vector elements
    }
    sort(a.begin(), a.end());

    if (a[0] == a[n - 1]) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << a[n - 1] << " ";  // Print the last element first
        for (int i = 0; i < n - 1; i++) {
            cout << a[i] << " ";  // Print the rest of the elements
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
