// #include <bits/stdc++.h>
// using namespace std;
// // <-- Digit Sum -->
// // digit_sum(n) -> digit_sum(n/10) + last_digit;
// // example 1234  -> digit_sum(1234/10) + 4;
// int long long digit_sum(int long long n){
// 	if(n == 0) return 0;
// 	return digit_sum(n/10) + n%10;
// 	// if(digit_sum > 10){
// 	// 	return digit_sum(n/10) + n%10;
// 	// }
// }
// int main(){
// 	string given_No = " ";
// 	int k;
// 	string append_No = " ";
// 	cin >> given_No >> k;
// 	for(int i=0;i<k; i++){
// 		append_No += given_No;
// 	}
// 	int long long n = stoll(append_No); // stoll( string ) is use to convert a string(large_No) into int i.e typeCasting

// 	while(n >= 10){
// 		n = digit_sum(n);
// 	}
// 	cout << n << endl;
// }




#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of digits of a number
int digit_sum(int n) {
    if(n == 0) return 0;
    return digit_sum(n / 10) + n % 10;
}

// Function to calculate the digit sum of a string
int string_digit_sum(const string &s) {
    int sum = 0;
    for(char c : s) {
        sum += (c - '0'); // Convert character to its corresponding digit
    }
    return sum;
}

int main() {
    string given_No;
    int k;
    
    // Take input
    cin >> given_No >> k;

    // Compute the digit sum of the given number as a string
   long long int  initial_digit_sum = string_digit_sum(given_No);
    
    // Multiply the initial digit sum by k
   long long int total_sum = initial_digit_sum * k;

    // Reduce the sum to a single digit
    while (total_sum >= 10) {
        total_sum = digit_sum(total_sum);
    }

    // Output the result
    cout << total_sum << endl;

    return 0;
}
