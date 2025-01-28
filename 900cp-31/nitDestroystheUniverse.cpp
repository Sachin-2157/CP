#include <iostream>
#include <vector>
using namespace std;

int minSnapsToDestroyUniverse(const vector<int>& a) {
    int n = a.size();
    bool allZero = true;
    int left = -1, right = -1;

    // Find the leftmost and rightmost non-zero elements
    for (int i = 0; i < n; ++i) {
        if (a[i] != 0) {
            allZero = false;
            if (left == -1) left = i;
            right = i;
        }
    }
    
    // If the array is already all zeros
    if (allZero) return 0;

    // Check if all elements between left and right are non-zero
    for (int i = left; i <= right; ++i) {
        if (a[i] == 0) {
            return 2; // There are zeros between, so we need 2 operations
        }
    }
    
    return 1; // All non-zero elements form a contiguous segment
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << minSnapsToDestroyUniverse(a) << endl;
    }
    return 0;
}
