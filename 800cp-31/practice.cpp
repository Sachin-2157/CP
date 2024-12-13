#include <bits/stdc++.h>
using namespace std;
int main(){
// 	// int s,p;
// 	// int a = 3;
// 	// cout << "a" << endl;
// 	// cout << a++ <<endl; 
// 	// cout << ++a << endl;
// 	string str1,str2,str3 ;
// 	cin >> str1 >> str2;
// 	//int c =size(str1);
// 	//int d = size(str2);
// 	str3 = str1 + str2;
// 	cout << str1.size() << " " << str2.size() << endl;
// 	cout << str3 << endl;
// 	return 0;
// }

string a,b;
    char temp;
    cin>>a;
    cin>>b;
    
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;
	   }