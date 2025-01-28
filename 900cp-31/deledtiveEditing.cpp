#include <bits/stdc++.h>
using namespace std;

bool canTransform(const string &s, const string &t) {
    // Step 1: Count the occurrences of each letter in s and t
    vector<int> sa(26, 0), ta(26, 0);
    for (char c : s) sa[c - 'A']++;
    for (char c : t) ta[c - 'A']++;

    // Step 2: Check if `s` has enough of each letter to form `t`
    for (int i = 0; i < 26; ++i) {
        if (sa[i] < ta[i]) return false;
    }

    // Step 3: Check if `t` can be a subsequence of `s`
    int j = 0; // Pointer for the target string `t`
    for (int i = 0; i < s.length(); i++) {
        if (j < t.length() && s[i] == t[j]) {
            j++; // Move to the next character in `t` if there's a match
        }
        if (j == t.length()) {
            return true; // `t` can be formed by maintaining order
        }
    }

    // If we finish the loop without fully matching `t`, return false
    return false;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;
        if (canTransform(s, t)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
