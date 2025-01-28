#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        
        // Using an array instead of a map for frequency counting
        const int MAX_VAL = 100000; // Adjust if needed
        vector<int> freq(MAX_VAL + 1, 0);

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            ++freq[x];
        }

        // Find the maximum frequency `am`
        int am = 0;
        for (int f : freq) {
            am = max(am, f);
        }

        // Calculate the answer
        int ans = 0;
        while (am < n) {
            int d = min(n - am, am);
            ans += 1 + d;
            am += d;
        }

        cout << ans << '\n';
    }
    return 0;
}
