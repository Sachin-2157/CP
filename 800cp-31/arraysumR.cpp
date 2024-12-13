#include <bits/stdc++.h>
using namespace std;
// sum(n,a) = a[n] + sum(n-1, a);
long long int R_sum(long long int n,long long  int arr[]){
	if(n<0) return 0;
	return R_sum(n-1,arr) + arr[n];

}
int main(){
	long long int n;
	cin >> n;
	long long int arr[n];
	for(int i = 0;i < n; i++){
	cin >> arr[i];
	}
	cout << R_sum(n-1, arr);
}