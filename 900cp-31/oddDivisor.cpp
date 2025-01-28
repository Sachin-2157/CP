#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


const int M = 1e9 + 7;
const int N = 1e6 + 10;

void solve()
{
    long long n;
    cin >> n;

//      expression n & (n - 1) is commonly used to check if a number  n is a power of 2. If 
// n is a power of 2, the result of n & (n - 1) is 0; otherwise, it is non-zero.
   if (n & (n - 1)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main()
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
