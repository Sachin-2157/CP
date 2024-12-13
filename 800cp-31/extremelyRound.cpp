// #include <bits/stdc++.h>
// using namespace std;

// #define int long long int
// #define double long double
// #define INT_MAX LLONG_MAX
// #define INT_MIN LLONG_MIN
// #define endl '\n'
// #define vin(a) for(int i=0;i<(a).size();i++)cin>>a[i];
// #define vout(a) for(int i=0;i<a.size();i++)cout<<a[i]<<' ';cout<<endl;


// const int M = 1e9+7;
// const int N = 1e6+10;


// void solve() {
//     int n;
//     cin >> n;
//     if( n <= 10){
//         cout << n << "\n";
//     }
//     else {
//         int count = 10;
//         for(int i = 11; i < n; i++){
//             if(i % 10 )
//         }
//     }

    

// }   

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int check(int x) {
    int cnt = 0;
    while (x > 0) {
        if (x % 10 != 0) cnt++;
        x /= 10;
    }
    return cnt == 1;  // Return 1 if true, otherwise 0
}

int main() {
    vector<int> a;
    for (int i = 1; i < 1000000; i++) {
        if (check(i)) {
            a.push_back(i);
        }
    }
    
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        for (int x : a) {
            if (x > n) break;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
