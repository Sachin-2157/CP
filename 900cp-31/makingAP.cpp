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
    int a, b, c;
    cin >> a >> b >> c;

    int aP_a = 2*b - c;
    if(aP_a >= a && aP_a % a == 0 && aP_a != 0){
        cout << "Yes\n";
        return;
    }
    int aP_b =( a + c) / 2;
    if(aP_b >= b && (c-a)%2 == 0 && aP_b % b == 0 && aP_b != 0){
        cout << "Yes\n";
        return;
    }
    int aP_c = 2*b - a;
    if(aP_c >= c && aP_c % c == 0 && aP_c != 0){
        cout << "Yes\n";
        return;
    }

    cout << "NO\n";
    return ;

    

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



