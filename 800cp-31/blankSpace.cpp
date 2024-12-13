#include <bits/stdc++.h>
using namespace std;


int binary_search(){
		int n;
		cin >> n;
		vector<int> v(n);
		// cin >> s;
		

		// below code is for counting max. consecutive '0'.
		int count = -1;
		int temp = 0;
		// int t_c = 0;
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i] == 0){	
				temp++;
				
				// t_c++;
			}else{
			count = max(count, temp);
			temp = 0;
		}
		
	}
	cout <<  max(count, temp) << endl;
}


int main(){
	int t;
	cin >> t;
	while(t--){

		binary_search();
	}
}		