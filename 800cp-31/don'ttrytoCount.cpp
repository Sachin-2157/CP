#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define endl '\n'
#define vin(a) for(int i=0;i<(a).size();i++)cin>>a[i];
#define vout(a) for(int i=0;i<a.size();i++)cout<<a[i]<<' ';cout<<endl;


const int M = 1e9+7;
const int N = 1e6+10;


void solve() {
	int n, m;
    cin >> n >> m;  // Read n and m
    string x, s;
    cin >> x >> s;  // Read the two strings

    for (int i = 0; i < 6; i++) {
        if (x.find(s) != string::npos) {  // Check if `s` is found in `x`
            cout << i << endl;  // Print the current number of appends
            return;
        }
        x += x;  // Append `x` to itself
    }
    cout << -1 << endl;  // If `s` is not found after 6 appends, print -1
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

