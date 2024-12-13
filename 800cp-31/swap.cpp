#include <bits/stdc++.h>   
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[10];
		for(int i=0;i<n;i++){ 
			cin >> arr[i];		
		}
		// we can select indexes from i = 2 so at i = 0 position least element should present b/c we can't change the at i = 0
		if(arr[0] == 1){
				cout << "YES" << endl;
			}else cout << "NO" << endl;
		
	}
}
// YES
// YES
// NO
// NO
// NO
// NO








// <-- Goals of Victory -->


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {	int t;
// 		cin >> t;
	
// 		while(t--){
// 			int n;
// 			cin >>n;
// 			int goal[n];
// 			int eff = 0;
// 			for(int i =0;i<n-1;i++){
// 				cin >> goal[i];
// 				eff += goal[i];
// 			}
// 			// int eff = 0;
// 			// for(int j=0;j<n-1;j++){
// 			// 	eff+=goal[j];
// 			// }
// 			int finalEff = -(eff);
// 			cout << finalEff <<endl;
// 		}


// 	}




// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 		cin >> t;
	
// 		while(t--){
// 			int n,k;
// 			cin >>n;
// 			cin >> k; // 4;
// 			int segmaent[n];
// 			bool flag = true;
// 			for(int i =0;i<n-1;i++){
// 				cin >> segmaent[i];
// 				if(segmaent[i] == k){ // 1 != 4
// 					flag = true;
// 					break;
// 				}else {
// 					flag = false;
// 					break;
// 				}
// 			}
// 			if(flag == true){
// 				cout << "yes" << endl;
// 			}
// 			else cout << "no" << endl;
// 		}
// 	}

// #include <bits/stdc++.h>
// using namespace std;
// // int main(){

// 	int fib(int n){
// 		if(n == 1 || n == 2){return 1;}
			
// 			return fib(n-1) + fib(n-2);
// 	}
		
	
// 	int main(){
// 		int n ;
// 		cin >> n;
// 		int n_fib = fib(n);
// 		cout << n_fib << endl;

// 		return 0;
// 	}
