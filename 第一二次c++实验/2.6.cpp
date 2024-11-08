#include <iostream>
using namespace std;
int 最大公约数(int a, int b)
{
	if (b == 0)
		return a;
	else
		return 最大公约数(b, a % b);
}
int 最小公倍数(int a, int b)
{
	return a * b / 最大公约数(a, b);
}
int main()
{
	cout << "输入两个正整数" << endl;
	int a, b;
	cin >> a >> b;

	cout << "最大公约数为：" << 最大公约数(a, b) << endl;
	cout << "最小公倍数为：" << 最小公倍数(a, b) << endl;

	return 0;
}