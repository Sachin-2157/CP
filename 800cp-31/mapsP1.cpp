#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
	cout << m.size() << endl;
	for(auto &pr : m){
		cout << pr.first << " " << pr.second <<endl;
	}
}


int main(){
	map<int, string > m;
	m[1] = "abc";
	m[3] = "cdc";
	m[5] = "acd";
	m.insert({4, "afg"});
	m[6];
	m[5] = "unique Key";
	print(m);
}