/*
	Name: ºÏ—È√‹¬Î 
	Copyright: 
	Author: macs
	Date: 07/09/18 22:20
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring> 
using namespace std;
int main()
{
	int n;
	cin >> n;
	getchar();
	while(n--){
		string pwd;
		getline(cin,pwd);
		int flag = 0;
		int len = pwd.length();
		bool num = false,zm = false;
		if(len < 6){
			cout << "Your password is tai duan le." << endl;
			continue;
		}
		for(int i = 0; i < len; i++){
			if(!(pwd[i] <= 'z' && pwd[i] >= 'a' || pwd[i] >= 'A' && pwd[i] <= 'Z' || pwd[i] == '.' || pwd[i] <= '9' && pwd[i] >= '0' )){
				cout << "Your password is tai luan le." << endl;
				flag = 1;
				break;
			}
		}
		if(flag){
			continue;
		}
		for(int i = 0; i < len; i++){
			if(pwd[i] <= '9' && pwd[i] >= '0'){
				num = true;
				break;
			}
		}
		if(num == false){
			cout << "Your password needs shu zi." << endl;
			continue;
		}
		for(int i = 0; i < len; i++){
			if(pwd[i] <= 'z' && pwd[i] >= 'a' || pwd[i] <= 'Z' && pwd[i] >= 'A'){
				zm = true;
				break;
			}
		}
		if(zm == false){
			cout << "Your password needs zi mu." << endl;
			continue;
		}	
		if(zm && num){
			cout << "Your password is wan mei." << endl;
			continue;
		}
		
	}
	return 0;
}

