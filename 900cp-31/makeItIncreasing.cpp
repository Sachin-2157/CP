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
    int n;
    cin >> n;

    vector<int> v(n);
    vin(v);
    int operations = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        // If the current element is not less than the next element
        while (v[i] >= v[i + 1])
        {
            // If a[i] is zero and we still can't make it less, it's impossible
            if (v[i] == 0)
            {
                cout << -1 << endl;
                return;
            }
            v[i] /= 2;
            operations++;
        }
    }

    cout << operations << endl;
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
