#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	cout<<"输入一个正整数求平方根："<<endl;
	int a;
	cin>>a;
	int i = a;
	int j, k;
	if(a<0)
		cout<<"输入的数字不是正整数"<<endl;
	else
	{
		do
		{
			j = (i + a / i) / 2;
			k = i;
			i = j;
		} while (abs(i - k) > 5);
		cout<<"平方根为："<<i<<endl;
	}
	return 0;
}