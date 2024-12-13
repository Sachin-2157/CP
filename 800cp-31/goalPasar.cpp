#include <bits/stdc++.h>
using namespace std;
int main(){
	string command;
	cin >> command ;
	string str_new = "";
	int n = command.size();
	// cout << n << endl;
		for(int i =0; i<n;i++)	{
			if(command[i]=='G'){
				str_new="G";
			}
				 if(command[i+1]=='(' && command[i+2] ==')'){
					str_new=+"o";
					// i++;
				}
			 if(command[i+3] =='(' && command[i+4] =='a' && command[i+5] == 'l' && command[i+6] == ')'){
				str_new+="al";
			}
		}
		cout << str_new;
	} 

		
	 #include <iostream>
using namespace std;


