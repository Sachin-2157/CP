// #include <bits/stdc++.h>
// using namespace std;



// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		long long int n, k, ans_k, ans_2, final_ans;
// 		cin >> n >> k;
// 		 ans_k = n % k ;
// 		 ans_2 = ans_k % 2;
// 		 final_ans = ans_k == 0 || ans_2 == 0;
// 		 // if (ans == 0){
// 		 // 	cout << "yes" << endl;
// 		 // }
// 		 // if(final_ans){
// 		 // 	cout << "YES" << endl;
// 		 // }
// 		 // else{
// 		 // 	cout << "NO" << endl;
// 		 // }
// 		 if((n - k) >=0 && (n - k) % 2 == 0){
// 		 	cout << "yes" << endl;
// 		 }else cout << "no" << endl;
// 	}
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
       long long  int n, k;
        cin >> n >> k;  

        bool flag = false;

//   If n is even, you can always represent it using only 2-burle coins.
// If n - k is non-negative and even, you can use one k-burle coin and represent the rest using 2-burle coins.

        for (int i = 0; i < 2; i++) {
            // Check if (n - x * k) is non-negative and even
            if (n - i * k >= 0 && (n - i * k) % 2 == 0) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }

        if (!flag) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
