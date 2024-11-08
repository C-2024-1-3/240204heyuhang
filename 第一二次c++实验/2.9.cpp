#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int i;
	int j=0;
	for (int i = 2; i <= 100; i = i * 2)
	{
		sum += i;
		j++;
	}
	cout<<"平均值为："<<sum*0.8/j<<endl;
	return 0;	
}