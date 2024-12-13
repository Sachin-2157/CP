// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin >> t;
// while(t--){
// 	int n;
// 	cin >> n;
// 	string str;
// 	cin >> str;
// 	int count = 0;
// 	for(int i = 0;i<n;){
// 		if(str[i]=='.' && str[i+1] == '.'){
// 			count++;
// 			i = i+2;
// 		}
// 		else{
// 			i++;
// 		}
		
// 	}

// 	cout << count << endl;

// }
// }
// // 2
// // 2
// // 5
// // 0
// // 2
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n%3 != 0){
			cout << "First";
		}

		else{
			cout << "Second";
		}
		cout << endl;
	}
	}
