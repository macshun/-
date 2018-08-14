/*
	Name: Ëµ·´»° 
	Copyright: 
	Author: mac 
	Date: 24/08/18 17:43
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	string str[90];
	int cnt = 0,i;
	freopen("test.txt","r",stdin);
	for(i = 0;i < 90;i++){
		cin >> str[i];
		if(str[i] == "\0"){
			break;
		}
	}
	for(int j = i - 1;j >= 0;j--){
		cout << str[j];
		if(j != 0){
			printf(" ");
		}
	}
	return 0;
}

