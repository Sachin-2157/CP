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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    int initial_sum = 0;
    
    // Input array and calculate the initial sum
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        initial_sum += a[i];
    }
    
    while(q--) {
        int l, r, k;
        cin >> l >> r >> k;
        
        
        // Calculate the sum of the current range
        int range_sum = 0;
        for(int i = l-1; i < r; i++) {
            range_sum += a[i];
        }
        
        // New total sum if we replace the range [l, r] with k
        int new_sum = initial_sum - range_sum + (r - l + 1) * k;
        
        // Check the parity of the new sum
        if(new_sum & 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define endl '\n'

// void solve() {
//     int n, q;
//     cin >> n >> q;
//     vector<int> a(n);
    
//     // Input array and calculate initial sum and prefix sum array
//     int initial_sum = 0;
//     vector<int> prefix_sum(n + 1, 0); // prefix_sum[i] stores the sum of a[0] to a[i-1]
    
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//         initial_sum += a[i];
//         prefix_sum[i + 1] = prefix_sum[i] + a[i]; // building prefix sum
//     }
    
//     // Process each query
//     while(q--) {
//         int l, r, k;
//         cin >> l >> r >> k;
//         l--; // convert to 0-indexed
//         r--; // convert to 0-indexed
        
//         // Calculate the sum of the range [l, r] using prefix sum array
//         int range_sum = prefix_sum[r + 1] - prefix_sum[l];
        
//         // Calculate the new total sum if we replace the range [l, r] with k
//         int new_sum = initial_sum - range_sum + (r - l + 1) * k;
        
//         // Check the parity of the new sum
//         if(new_sum % 2 != 0) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
    
//     return 0;
// }
