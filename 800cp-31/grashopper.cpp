

// < -- DONE -->

#include <bits/stdc++.h>
using namespace std;


void reaching_move(int x, int k){
	int target  = x;

	if( x % k != 0){
		cout << 1 << endl << x << endl;
	}
	else{
	vector<int> v;
	for(int i=0; i<x; i++){
		if(i % k != 0){
			v.push_back(i);
		   }
        }

        cout << 2 << endl << v[0] << " " <<  v[v.size()-1] << endl;
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int x, k;
		cin >> x >> k;
		 reaching_move(x, k);
	}
}