#include<iostream>
using namespace std;
int main()
{
	int l1, l2, l3;
	cout << "输入三角形的三条边" << endl;
	cin >> l1 >> l2 >> l3;
	if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1)
	{
		cout << "三角形的周长为：" << l1 + l2 + l3 << endl;
		if (l1 == l2 || l1 == l3 || l2 == l3)
			cout << "三角形为等腰三角形" << endl;
	}
	else
		cout<<"无法组成三角形"<<endl;
	return 0;
}