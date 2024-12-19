#include<iostream>
using namespace std;

int times = 0;

bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num == 2 || num == 3)
			return true;
		if (num % i == 0)
			return false;
		if (i > num / i)
			return true;
	}
}

int main()
{
	int a[20][10];
	for (int i = 2;; i++)
	{
		if (is_prime(i))
		{
			a[times/10][times%10] = i;
			times++;
		}
		if (times == 200)
			break;
	}
	for (int i = 0; i < 20; i++)
	{
		for (int k = 0; k < 10; k++)
		{
			cout << a[i][k] << "  ";
		}
		cout << endl;
	}
	return 0;
}