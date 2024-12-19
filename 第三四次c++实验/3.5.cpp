#include<iostream>
using namespace std;

int times = 1;

int find(int a)
{
	a = 2*(a + 1);
	times++;
	if (times < 10)
		return find(a);
	else
		return a;
}

int main()
{
	int final = 1;
	cout<<find(final);
	return 0;
}