#include<iostream>
using namespace std;
int 最大公约数(int a, int b)
{
	if (b == 0)
		return a;
	else
		最大公约数(b, a % b);
}
int 最小公倍数(int a, int b)
{
	int i = 最大公约数(a, b);
	return a * b / i;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "最大公约数为：" << 最大公约数(m, n) << endl;
	cout << "最小公倍数为：" << 最小公倍数(m, n) << endl;
	return 0;
}