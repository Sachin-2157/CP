// <-- DONE -->


#include <bits/stdc++.h>
using namespace std;


int sorting(vector<int>& v, int n) {
    if (!is_sorted(v.begin(), v.end())) {
        return 0; 
    }
    
    int diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        diff = min(diff, abs(v[i] - v[i-1]));
    }

    
    if (diff == 0) {
        return 1;
    } else if(diff % 2 == 0) {
        return diff/2 + 1;
    }
    else return (diff +1)/2;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        cout << sorting(v, n) << endl;
    }
    return 0;
}




// 0
// 0
// 122231862
// 0
// 281576564
// 0
// 36849726
// 0
// 0
// 146652643
// 0
// 59720077
// 0
// 467508357
// 181362282
// 0
// 37268370
// 0
// 0
// 16414115
// 0
// 53320845
// 0
// 0
// 0
// 0
// 12537685
// 0
// 13641505
// 0
// 0