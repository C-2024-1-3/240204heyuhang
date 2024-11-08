#include<iostream>
using namespace std;
int main()
{
	//Int i = k + 1;  int的i不能大写，否则会报错，同时未定义k
	int k = 10;//定义k
	int i = k + 1;
	cout << i++ << endl;
	//int i = 1;不能重复定义i
	i = 1;//重新定义i=1
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}