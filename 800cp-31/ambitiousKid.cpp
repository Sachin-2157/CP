#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	set<int> s;
	for(int i=0; i<n; i++){
		int num;
		cin >> num;
		s.insert(abs(num));
	}
	  // below loop is used to find the min no. of req. move to complete the given q
		cout << *min_element(s.begin(),s.end()) << " ";
	

}







// int main(){
// 	int N;
// 	cin >> N;
// 	bool isZero = false;
// 	int r_OP = 0
// 	vector<int>v[N];
// 	for(int i = 0;i<N; ++i){
// 		int n;
// 		cin >> n;
// 		for(int j = 0; j < n;++j){
// 			int x;
// 			cin >> x; //for inner vector
// 			v[i].push_back(x);
// 		}	
// 	}
// 	if(v[i] == 0){
// 		isZero = true;
// 	}
// 	else{ 
// 		r_OP += abs(v[i]);
// 	}
// 	if(isZero == true){
// 		cout << "0" << endl;
// 	}else cout << r_OP << endl;
// }



// contest

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t ;
// 	cin >> t;
// 	while(t--){
// 		vector<int>v(2);
// 		for(int i=0; i<2;i++){
// 			cin >> v[i];
// 		}
// 		sort(v.begin(), v.end());
// 		for(int i=0; i<2;i++){
// 			cout <<  v[i] << " ";
// 		}
// 		cout << endl;
// 	}

// }
