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
    string s;
    cin >> s;
    int i = 0 , j = n - 1;
    int count = 0;
    while(i < j && s[i] != s[j]){ // we r checking the 1st and last element of s is not same if same condition is false;
        i++;
        j--;
    }
    int original_length = j - i + 1;
    cout << original_length << "\n";
    // for(i , j ; i < j; i++, j--){
    //     if((s[i] == 0 && s[j] == 1) || (s[i] == 1 && s[j] == 0)){
    //         continue;
    //     }else count++;
    // }
    // cout << count << "\n";

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

