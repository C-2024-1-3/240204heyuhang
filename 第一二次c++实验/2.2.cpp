#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "Enter a number between 0 and 10: ";
    cin >> x;
    if (0 < x < 1)
    {
        y = 3 - 2 * x;
        cout << y << endl;
    }
    else if (x >= 1 && x < 5)
    {
        y = (2 / (4 * x)) + 1;
        cout << y << endl;
    }
    else if (x >= 5 && x < 10)
    {
        y = x * x;
        cout << y << endl;
    }
    else
    {
        cout << "Error!" << endl;
    }
    return 0;
}