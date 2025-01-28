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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if(s.size() == 1){
        cout << "Yes\n";
        return;
    }
        // Frequency array to count occurrences of each character
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        // Count the number of odd frequency characters
        int odd_count = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                odd_count++;
            }
        }

        // Remaining length after removing k characters
        // int remaining_length = n - k;

        // Check if the remaining length is even and the number of odd occurrences is less than or equal to the remaining length
        // if (remaining_length % 2 == 0 && odd_count <= remaining_length) {
        //     cout << "YES" << endl;
        // } else {
        //     cout << "NO" << endl;
        // }
        if(odd_count <= k+1){
            cout << "Yes\n";

        }else cout << "NO\n";
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