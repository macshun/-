/*
	Name: A+B in Hogwarts
	Copyright: 
	Author: mac
	Date: 23/08/18 21:01
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
const int G = 29*17;
const int S = 29;
int main()
{
	int a2,a3,b2,b3;
	long long a1,b1;
	long long sum;
	scanf("%lld.%d.%d %lld.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
	sum = (a1+b1)*G + (a2+b2)*S + a3 + b3;
	printf("%d.%d.%d",sum/G,sum % G / S,sum % S);
	return 0;
}

