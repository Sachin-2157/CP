
// // You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).//



#include <bits/stdc++.h>
using namespace std;
int main(){
	string str1;
	string str_rev;
	cin >> str1 ;
	for(int i = str1.size() - 1;i >= 0;i--){
			 str_rev.push_back(str1[i]);
		}

			if(str1 == str_rev)
				cout << "YES";
			else cout << "NO";
}
	
