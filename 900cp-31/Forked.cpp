#include <iostream>
#include <cmath>
#include <set>

using namespace std;

// Function to check if a knight can attack a given position
bool attacks(int xPiece, int yPiece, int x, int y, int a, int b) {
    // A knight attacks if it can move in 'a' or 'b' direction by a legal knight move
    return (abs(x - xPiece) == a && abs(y - yPiece) == b) || 
           (abs(x - xPiece) == b && abs(y - yPiece) == a);
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int a, b;
        cin >> a >> b;  // Knight's move distances 'a' and 'b'

        int xK, yK;
        cin >> xK >> yK;  // King's position

        int xQ, yQ;
        cin >> xQ >> yQ;  // Queen's position

        // Set to store unique positions where the knight can attack both king and queen
        set<pair<int, int>> attackingPositions;

        // These are the 8 possible knight moves relative to the king
        int knightMoves[8][2] = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        // Check each of the 8 possible moves relative to the king
        for (int i = 0; i < 8; i++) {
            int newX = xK + knightMoves[i][0];
            int newY = yK + knightMoves[i][1];

            // Check if this position also attacks the queen
            if (attacks(xQ, yQ, newX, newY, a, b)) {
                attackingPositions.insert({newX, newY});
            }
        }

        // Output the number of distinct positions that attack both king and queen
        cout << attackingPositions.size() << endl;
    }

    return 0;
}
