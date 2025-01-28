/**
 * This C++ program reads an integer `t`, then for each test case, it reads an integer `n` and a string
 * `s`, and calculates the maximum consecutive characters in the string.
 */
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
    cin >> n; // Initialize n with input
    string s; // Now s is initialized with size n
    cin >> s;

    /* This part of the code is calculating the maximum number of consecutive characters in a given
    string `s`. */
    int count = 1, temp = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            temp = 1;
        else
            temp++;
        count = max(count, temp);
    }
    cout << count + 1 << endl;
}

int32_t main()
{
    /* `ios_base::sync_with_stdio(false);` is a statement that disables the synchronization between C
    and C++ standard streams. By default, C++ standard streams (like cin, cout, cerr) are
    synchronized with the C standard streams (like scanf, printf, perror). This synchronization can
    cause a significant performance overhead in some cases. */
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
