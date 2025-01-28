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
    
int N;
    cin >> N;

    vector<int> A(N);
    int ans = INT_MIN;  // Initializing ans with the minimum integer value

    // Reading the array elements
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Case 1: Consider differences with cyclic shifts
    for (int i = 0; i < N; ++i) {
        ans = max(ans, A[(i - 1 + N) % N] - A[i]);
    }

    // Case 2: Bring max element to the last position by taking A[i] - A[0]
    for (int i = 1; i < N; ++i) {
        ans = max(ans, A[i] - A[0]);
    }

    // Case 3: Bring min element to the first position by taking A[N - 1] - A[i]
    for (int i = 0; i < N - 1; ++i) {
        ans = max(ans, A[N - 1] - A[i]);
    }

    cout << ans << '\n';
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