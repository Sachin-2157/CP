#include <bits/stdc++.h>
using namespace std;
int main(){
int t; // Number of test cases
cin >> t;

while (t--) {
    char grid[10][10];  // Use a 2D array for the grid
    int totalPoints = 0;

    // Read the 10x10 grid for this test case
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> grid[i][j];
        }
    }

    // Calculate points by checking where 'X' is in the grid
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (grid[i][j] == 'X') {
                // The score is determined by the minimum distance to the edge
                int score = min({i, j, 9 - i, 9 - j}) + 1;
                totalPoints += score;
            }
        }
    }
   				cout << totalPoints << endl;
}
}