// // #include <bits/stdc++.h>
// // using namespace std;

// // void unit_array(int n){
// // 	// vector<int> v(n);
// // 	vector<int>  v_neg;
// // 	// vector<int> v_pos;
// // 	int neg_sum = 0;
// // 	int pos_sum = 0;
// // 	int neg_product = 1;
// // 	for(int element = 0; element < n; element++){
// // 		cin >> element;
// // 		if(element < 0){
// // 			v_neg.push_back(element);
// // 			neg_product *= -1;
// // 			neg_sum++;
// // 		  }
// // 		else{
// // 			pos_sum++;
// // 		}	
		
// // 		}
// // 		int ans = 0;
// // 		for(int i = 0; i < n; i++){
// // 			if(neg_sum - pos_sum == 0 && v_neg.size() % 2 == 0){
// // 				cout << 0 << "\n";
// // 			}
// // 			else if(neg_sum - pos_sum < 0 && v_neg.size() % 2 == 0){
// // 				neg_sum--;
// // 				ans++;
// // 			}
// // 			else if(neg_sum - pos_sum < 0 && v_neg.size() % 2 != 0){
// // 				neg_sum--;
// // 				v_neg.pop_back();
// // 				ans++;
// // 				cout << ans << endl;
// // 			}
// // 			else(neg_sum - pos_sum == 0 && v_neg.size() % 2 != 0){
// // 				// neg_sum--;
// // 				v_neg.pop_back();
// // 				ans++;
// // 				cout << ans << endl;

// // 			}
// // 		}
	
// // 	}


// // int main(){
// // 	int t;
// // 	cin >> t;
// // 	while(t--){
// // 		int n;
// // 		cin >> n;
// // 		 unit_array(n);
// // 	}
// // }



// // // 7
// // // 4
// // // -1 -1 1 -1
// // // 5
// // // -1 -1 -1 1 1
// // // 4
// // // -1 1 -1 1
// // // 3
// // // -1 -1 -1
// // // 5
// // // 1 1 1 1 1
// // // 1
// // // -1
// // // 2
// // // -1 -1
// #include <bits/stdc++.h>
// using namespace std;

// void unit_array(int n) {
//     vector<int> v_neg;  // Store negative numbers
//     int neg_sum = 0;    // Count of negative numbers
//     int pos_sum = 0;    // Count of positive numbers
//     int neg_product = 1;

//     // Input loop
//     for (int i = 0; i < n; i++) {
//         int element;
//         cin >> element;
//         if (element < 0) {
//             v_neg.push_back(element);
//             neg_sum++;
//         } else {
//             pos_sum++;
//         }
//     }
	
// 			int ans = 0;
// 			if(neg_sum - pos_sum == 0 && v_neg.size() % 2 == 0){
// 				cout << 0 << "\n";
// 			}
// 			else if(neg_sum - pos_sum < 0 && v_neg.size() % 2 == 0){
// 				neg_sum--;
// 				ans++;
// 			}
// 			else if(neg_sum - pos_sum < 0 && v_neg.size() % 2 != 0){
// 				neg_sum--;
// 				v_neg.pop_back();
// 				ans++;
// 				// cout << ans << endl;
// 			}
// 			else{
// 				// neg_sum--;
// 				v_neg.pop_back();
// 				ans++;
// 				// cout << ans << endl;
// 				cout << ans << endl;

// }
			
// 	}	


// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         unit_array(n);
//     }
// }


#include <bits/stdc++.h>
using namespace std;

void solve() {      
    int n;
    cin >> n;
    vector<int> a(n);
    
    int sum = 0, neg_count = 0;
    
    // Read the array and calculate the initial sum and count of -1's
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] == -1) {
            neg_count++;
        }
    }
    
    // Make sum of elements ≥ 0
    int operations = 0;
    while (sum < 0) {
        sum += 2;  // Change one -1 to 1, which increases the sum by 2
        neg_count--;
        operations++;
    }
    
    // Ensure the product of elements is 1
    if (neg_count % 2 != 0) {
        operations++;
    }
    
    cout << operations << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
