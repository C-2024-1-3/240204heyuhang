#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1;
	getline(cin, str1);
	string str2;
	getline(cin, str2);
	for (int i = 0; i <= str2.size() - str1.size(); i++)
	{
		int place = 0;
		for (int j = 0; j < str1.size(); j++)
		{
			if (str1[j] == str2[i + j])
				place++;
			else
				break;
		}
		if (place == str1.size())
		{
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
}