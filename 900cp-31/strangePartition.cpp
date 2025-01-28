#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define endl '\n'
#define vin(a) for(int i=0; i<(a).size(); i++) cin>>a[i];
#define vout(a) for(int i=0; i<(a).size(); i++) cout<<a[i]<<' '; cout<<endl;

const int M = 1e9+7;
const int N = 1e6+10;

void solve() {
    int n, x, min_sum = 0, max_sum = 0;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        min_sum += v[i];
        max_sum += (v[i] + x - 1) / x; // Ensures proper rounding up
    }
    int min_val = (min_sum + x - 1) / x; // Ensures proper rounding up
    cout << min_val << " " << max_sum << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
