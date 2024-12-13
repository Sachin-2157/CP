#include <bits/stdc++.h>
using namespace std;
int main(){
	string str1;
	string str_rev;
	cin >> str1 ;
	for(int i = str1.size() - 1;i >= 0;i--){
			 str_rev.push_back(str1[i]);

		}
			cout << str_rev;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string str1;
//     string str_rev;
//     cin >> str1;
//     for(int i = str1.size() - 1; i >= 0; i--) {
//         str_rev.push_back(str1[i]);
//     }
//     cout << str_rev;
// }
