/*
	Name: Dating
	Copyright: 
	Author: mac
	Date: 27/08/18 15:35
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	map<char, string> mp;
		mp['A'] = "MON";
		mp['B'] = "TUE";
		mp['C'] = "WED";
		mp['D'] = "THU";
		mp['E'] = "FRI";
		mp['F'] = "SAT";
		mp['G'] = "SUN";
		char str[4][60];
		int len1,len2,j;
		scanf("%s%s%s%s",str[0],str[1],str[2],str[3]);
		if(strlen(str[0]) >= strlen(str[1])){
			len1 = strlen(str[1]);
		}else
			len1 = strlen(str[0]);
		for(j = 0; j < len1; j++){
			if(str[0][j] >= 'A' && str[0][j] <= 'G'){
				if(str[0][j] == str[1][j]){
					printf("%s ", mp[str[0][j]].c_str());
					break;
				}	
		}
	}
	for(j++; j < len1; j++){
		if(str[0][j] >= '0'&& str[0][j] <= '9'){
			if(str[0][j] == str[1][j]){
				printf("%02d:",str[0][j] - '0');
				break;
			}
			
		}
		if(str[0][j] >= 'A' && str[0][j] <= 'N'){
			if(str[0][j] == str[1][j]){
				printf("%02d:",str[1][j] - 'A' + 10);
				break;
			}
		}
	}
	
	if(strlen(str[2]) >= strlen(str[3])){
		len2 = strlen(str[3]);
	}else
		len2 = strlen(str[2]);
	for(int i = 0; i < len2; i++){
		if((str[2][i] >= 'a' && str[2][i] <= 'z') || (str[2][i] >= 'A' && str[2][i] <= 'Z')){
			if(str[2][i] == str[3][i]){
				printf("%02d",i);
				break;
			}
		}
	}
	return 0;
}

