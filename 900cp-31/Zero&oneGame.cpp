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
    string num;
    cin >> num;
    int one_count = 0;
    int zero_count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == '0')
        {
            zero_count++;
        }
        else
        {
            one_count++;
        }
    }
    int ans = min(zero_count, one_count);
    if (ans & 1)
    {
        cout << "DA\n";
    }
    else
    {
        cout << "NET\n";
    }
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
