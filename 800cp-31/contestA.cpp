#include <bits/stdc++.h>
using namespace std;


int min_op(int n, int k){
	if(k == 1) return n;
	int operations = 0;
	while(n > 0){
		operations += n%k;
		n = n/k;
	}
	return operations;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << min_op(n, k) << endl;
		
	}
}



// 2
// 3
// 1
// 4
// 21
// 10
