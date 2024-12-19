#include<iostream>
using namespace std;

int num = 0;
int b[10];

void test(int a)
{
	for (int i = 0; i < 10; i++)
	{
		if (a == b[i])
			return;
	}
	b[num] = a;
	num++;
}

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
		test(a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (b[i]==0)
			break;
		else
			cout << b[i] << "   ";
	}
	return 0;
}