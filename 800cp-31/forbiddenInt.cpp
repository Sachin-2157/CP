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
    int n, k, x;
    cin >> n >> k >> x;
     if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            vector<int> result(n, 1);
            for (int i = 0; i < n; i++) {
                cout << result[i] << " ";
            }
            cout << endl;
        } else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            vector<int> result;
// In the else case, the code handles the scenario when x == 1 but a valid sequence can still be formed based on the value of k and n. Here's what happens step-by-step:
// The program prints "YES" to indicate that a valid sequence can be generated.
// It then prints n / 2, which represents the number of terms in the final sequence that will be printed.
// A vector result is used to store the numbers in the sequence. If n is odd, the sequence starts with 3 (since it  needs an odd number to balance), and if n is even, the sequence starts with 2.
// The rest of the sequence is filled with 2s until the size of the vector reaches n / 2.
// Finally, the vector elements are printed, which represent the sequence of numbers that satisfy the given problem's constraints.
// This ensures that even when x == 1, a valid output can still be formed under certain conditions.
            if (n % 2 == 1) {
                result.push_back(3);
            } else {
                result.push_back(2);
            }
            for (int i = 1; i < n / 2; i++) {
                result.push_back(2);
            }
            for (int i = 0; i < result.size(); i++) {
                cout << result[i] << " ";
            }
            cout << endl;
		
        }


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