/*
	Name: 个位数统计 
	Copyright: 
	Author: mac
	Date: 25/08/18 19:40
	Description:  map
*/
#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
int main()
{
	freopen("test.txt","r",stdin);
	map<char,int> mp;
	char n;
	while(cin >> n){
		mp[n]++;	
	}
	for(map<char,int>::iterator it = mp.begin(); it != mp.end(); it++){
		cout << it -> first << ":" << it -> second << endl;
	}
	return 0;
}

