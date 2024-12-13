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

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if ( (v[i] % 2 == 0 && v[i + 1] % 2 == 0) || (v[i] % 2 != 0 && v[i + 1] % 2 != 0)) {
            count++;
            int pdt_ele = v[i] * v[i + 1];
            v.erase(v.begin() + i);
            v.erase(v.begin() + i); // After erasing the first element, index shifts
            v.insert(v.begin() + i, pdt_ele);
            // Decrease `i` to check the new element at `i`
            i--; 
            n--; // Reduce the size of the array
        }
    }
    cout << count << endl;
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


// < -- More Efficent LOGIC -->

    // {
    //     //initialize answer..
    //     int ans=0;
    //     for(int i=0;i+1<n;i++) {
    //         ans+=(!((a[i]^a[i+1])&1));
    //         /*XOR the two numbers and check 0th bit in the resultant, if it is 1
    //         then, numbers are of different parity, otherwise both are of same parity*/
    //     }
    //     cout<<ans<<"\n";
    // }                                                                    