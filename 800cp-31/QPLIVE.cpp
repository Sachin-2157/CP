include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	int cth_num;
	cin >> a >> b >> c;
	for (int i = 1; i <=c;i++){
		if(i%a == 0 || i%b == 0){
			cth_num =i;
		}
	}
	  cout << cth_num ;
}
