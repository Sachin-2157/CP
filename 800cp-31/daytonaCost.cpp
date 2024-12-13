#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
		cin >> t;
	
		while(t--){
			int n,k;
			cin >>n;
			cin >> k; // 4;
			int segment[n];
			bool flag = false;
			for(int i =0;i<n;i++){
				cin >> segment[i];
				if(segment[i] == k){ // 1 != 4
					flag = true;
					//break;
				// }else {
				// 	flag = false;
				// 	//break;
				}
			}
			if(flag == true){
				cout << "yEs" << endl;
			}
			else cout << "NO" << endl;
		}
	}



