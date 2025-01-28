#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define endl '\n'
#define vin(a)                           \
    for (int i = 0; i < (a).size(); i++) \
        cin >> a[i];
#define vout(a)                        \
    for (int i = 0; i < a.size(); i++) \
        cout << a[i] << ' ';           \
    cout << endl;

const int M = 1e9 + 7;
const int N = 1e6 + 10;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vin(a);
    sort(a.begin(), a.end());
    int cnt = 1, ans = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] - a[i - 1] > k) {
            cnt = 1;
        } else {
            ++cnt;
        }
        ans = max(ans, cnt);
    }
    
    cout << n - ans << '\n';
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}