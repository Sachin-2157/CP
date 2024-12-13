#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int N, K;
	    
	    cin >> N >> K ;
	    vector<int>v(N);
	    for(int i = 0; i < N; i++){
	        cin >> v[i];
	    }
	    
	    int i = 0;int count = 0;int sum = 0;
	    while(i < N && sum + v[i] <= K){
	        count++;
	        sum = sum + v[i];
			i++;
	    }
	    cout << count << endl;
	}

}


// // 2
// // 4
// // 0

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;  
//     while(t--){
//         int N, K;
//         cin >> N >> K; 
        
//         vector<int> v(N);
//         for(int i = 0; i < N; i++) {
//             cin >> v[i];  
//         }
        
//         int i = 0, count = 0, sum = 0;
//         while(i < N && sum + v[i] <= K) {  // Check if adding the next sweet exceeds the limit
//             sum += v[i];
//             count++;
//             i++;
//         }
        
//         cout << count << endl;  // Output the maximum number of sweets Sushil can eat
//     }

//     return 0;
// }
