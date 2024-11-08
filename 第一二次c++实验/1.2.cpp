#include <iostream>
using namespace std;
const double pi = 3.1415926;
int main()
{
	int r, h;
	cout << "请输入圆锥的半径" << endl;
	cin >> r;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	int v = pi * r * r * h / 3;
	cout << "圆锥体积为" << v << endl;
	return 0;
}