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
    long long n, k, x;
    cin >> n >> k >> x;
    // vector<int> v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }

    // Sort the array to calculate min_sum and max_sum easily
    // sort(v.begin(), v.end());

    int min_sum = 0;
    int max_sum = 0;

    min_sum = (k * (k + 1)) / 2;
    max_sum = (n * (n + 1) - (n - k) * (n - k + 1)) / 2;

    if (x >= min_sum && x <= max_sum)
    { // check if x is between the minimum and maximum sum
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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
