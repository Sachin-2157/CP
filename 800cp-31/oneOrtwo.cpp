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
    int noOf_2 = 0;
    bool k_present = false;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 2){
            noOf_2++;
            
        }
    } 
        int left_2 = 0;
        for(int k = 0; k < n-1; k++){
            if(v[k] == 2){
            left_2++;
            }
        
        int right_2 = noOf_2 - left_2;
        if(right_2 == left_2){
            cout << k + 1 <<"\n";
            k_present = true;
            break;
        }
    }
        if(!k_present){
            cout << -1 <<"\n";
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


        
