#include<iostream>
using namespace std;

int main()
{
	int** list;
	list = new int*[2];
	int size1, size2;
	cin >> size1;
	list[0] = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		cin >> list[0][i];
	}
	cin >> size2;
	list[1] = new int[size2];
	for (int i = 0; i < size2; i++)
	{
		cin >> list[1][i];
	}
	int time1 = 0;
	int time2 = 0;
	int time = 0;
	int final_list[160] = { 0 };
	while (true)
	{
		if (time1 == size1)
		{
			final_list[time] = list[1][time2];
			time++;
			time2++;
			if (time2 == size2)
				break;
			else
				continue;
		}
		if (time2 == size2)
		{
			final_list[time] = list[0][time1];
			time++;
			time1++;
			if (time1 == size1)
				break;
			else
				continue;
		}
		if (list[0][time1] < list[1][time2])
		{
			final_list[time] = list[0][time1];
			time1++;
			time++;
			continue;
		}
		if (list[0][time1] > list[1][time2])
		{
			final_list[time] = list[1][time2];
			time2++;
			time++;
			continue;
		}	
		if (list[0][time1] == list[1][time2])
		{
			final_list[time] = list[0][time1];
			time1++; 
			time2++; 
			time++;
			continue;
		}
	}
	int final_time = 0;
	while (true)
	{
		if (final_list[final_time] == 0)
			break;
		cout << final_list[final_time] << " ";
		final_time++;
	}
	for (int i = 0; i < 2; i++)
	{
		delete[]list[i];
	}
	delete[]list;
	return 0;
}