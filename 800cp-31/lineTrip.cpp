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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        vin(v);
        // v.push_back(2*(x - v[n - 1]));
        int maximum = v[0];   // we assume it is a maximum 
        for(int i = 1; i < n; i++){
            maximum = max(maximum,(v[i]  - v[i - 1]));  
        }
        maximum = max(maximum, 2*(x - v[n - 1]));  // 
        cout << maximum << endl;

    

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
