#include <bits/stdc++.h>
using namespace std;


void printVec( vector<int> &v){
	cout << "size " << v.size() << endl;
	for(int i = 0;i<v.size(); ++i){
		cout << v[i]<< " ";
	}
	cout << endl;
}


int main(){
	int N;
	cin >> N;
	vector<vector<int> > v;
	for(int i = 0;i<N; ++i){
		int n;
		cin >> n;
		vector<int> temp;
		for(int j = 0; j < n;++j){
			int x;
			cin >> x; //for inner vector
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	for(int i = 0;i < v.size(); ++i){
		printVec(v[i]);
	}
	cout << v[0][1];
}