#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to calculate the minimum number of deletions to make the number end in target suffix
int min_deletions_for_suffix(const string& n, char X, char Y) {
    int posY = -1, posX = -1;
    
    // Find position of Y from the end of the string
    for (int i = n.size() - 1; i >= 0; i--) {
        if (n[i] == Y) {
            posY = i;
            break;
        }
    }
    
    // If Y is not found, return a large number (as it's invalid for this suffix)
    if (posY == -1) return n.size();
    
    // Find position of X before the position of Y
    for (int i = posY - 1; i >= 0; i--) {
        if (n[i] == X) {
            posX = i;
            break;
        }
    }
    
    // If X is not found, return a large number (as it's invalid for this suffix)
    if (posX == -1) return n.size();
    
    // Minimum deletions needed are those between the end of the string and posX
    return (n.size() - posX - 2);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string n;
        cin >> n;
        
        // Try all target suffixes "00", "25", "50", "75"
        int min_steps = min({
            min_deletions_for_suffix(n, '0', '0'),
            min_deletions_for_suffix(n, '2', '5'),
            min_deletions_for_suffix(n, '5', '0'),
            min_deletions_for_suffix(n, '7', '5')
        });
        
        cout << min_steps << endl;
    }
    
    return 0;
}
