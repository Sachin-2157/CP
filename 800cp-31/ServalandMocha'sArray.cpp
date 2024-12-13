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
        int n;
        cin >> n;
        vector<int> v(n);
        vin(v);
        bool found = false;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
            if (__gcd(v[i], v[j]) <= 2){
                swap(v[0], v[i]);
                swap(v[1], v[j]);
                found = true;
            }
            }
        }
        if(found == true){
            cout << "Yes\n";
        }else cout << "No\n";

    

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