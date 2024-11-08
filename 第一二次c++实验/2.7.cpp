#include <iostream>
using namespace std;
void 输出星星(int a)
{
	for (int i = 0; i <= a; i++)
		cout << "*";

}
int main() 
{
	for (int i = 0; i < 5; i++)
	{
		输出星星(i);
		cout << endl;
	}
	return 0;
}