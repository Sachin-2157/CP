#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<int,int> > v_p = {{1,2}, {2,3}};
	for(pair<int, int> &value :v_p){
		cout << value.first << " " << value.second << endl;
	}
	cout << " " <<endl;
	for(auto &value : v_p){
		cout << value.first << " " << value.second << endl;
	}
	auto a = 1.02;
	cout << a << endl;
}