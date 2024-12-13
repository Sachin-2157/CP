#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		if(c % 2 != 0){
			a+=1;
		}
		
		if(a > b){
			cout << "First\n";
		}else{
			cout << "Second\n";
		}

	}
}



// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;  // Read number of test cases
//     while (t--) {
//         long long a, b, c;
//         cin >> a >> b >> c;  // Read the values of a, b, and c
//         long long total_moves = a + b + c;
//         if (total_moves % 2 == 1) {
//             cout << "First" << endl;
//         } else {
//             cout << "Second" << endl;
//         }
//     }

//     return 0;
// }
