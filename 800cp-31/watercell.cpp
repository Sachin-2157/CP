
// <-- DONE -->
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char s[n] = " ";
		for(int i=0; i<n; i++){
			cin >> s[i];
		}
		int count = 1;
		int temp = 0;
		int t_c = 0;
		for(int i=0; i<n; i++){
			while(s[i] == '.'){
				temp++;
				i++;
				t_c++;
			}
			count = max(count, temp);
			temp = 0;
		}
	
			if(count >= 3){
				cout << 2 << endl;
			}
			else {
				cout << t_c << endl;
			}
	   }
   }








// void solve() {
//     int n ;
//     cin >> n ;
//     string s ;
//     cin >> s ;
//     int ans = 0 ;

//     int dot = 0 ;
//     int hash = 0 ;

//     for (auto ch : s){
//         if (ch == '.') dot++ ;
//         else hash++ ;
//     }
//     if (dot == 0){
//         cout << ans << endl ;
//         return ;
//     }
//     else {
//         // dot >= 1 ;
//         int count = 1;  // to store consecutive dot
//         int temp = 0 ;
//         for (int i=0 ; i<n ; i++){
//                 while (s[i] == '.'){
//                     temp++ ;
//                     i++ ;
//                 }
//             count = max(count , temp) ;
//             temp = 0 ;
//         }
//         if (count >= 3){
//             cout << 2 << endl ;
//         }
//         else {
//             cout << dot << endl ;
//         }
//     }

// }

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		// 
// 		solve();
// 	}
// }