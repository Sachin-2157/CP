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
	int odd_Count = 0;
		for(int i = 0; i < n; i++){
			cin >> v[i];
			if(v[i] % 2 != 0){ // even element will not affect the parity therefore we need to focus on odd element if the no of odd element is even then we can distribute equal no. of element in both vector and its parity will remain same.
				odd_Count++;
			}
		}
		if(odd_Count % 2 == 0){
		cout << "Yes" << "\n";
		} else cout << "No\n";

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