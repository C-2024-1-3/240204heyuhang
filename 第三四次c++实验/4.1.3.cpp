#include<iostream>
using namespace std;

bool change(bool& a)
{
	if (a)
		return a = false;
	else
		return a = true;
}

int main()
{
	bool a[100] = { false };
	for (int i = 0; i < 100; i++)
	{
		for (int j = i;;)
		{
			if (j <= 99)
			{
				change(a[j]);
				j += i + 2;
			}
			else
				break;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == 1)
			cout << i + 1 << " ";
	}
	return 0;
}