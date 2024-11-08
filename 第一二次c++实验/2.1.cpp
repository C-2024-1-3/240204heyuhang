#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "请输入一个字符: ";
    cin >> a;
    if (a >= 'a' && a <= 'z')
        cout << "大写为: " << static_cast<char>(a - 'a' + 'A') << endl;
    else
        cout << "后继字符的ASCII码值: " << a + 1 << endl;
    return 0;
}