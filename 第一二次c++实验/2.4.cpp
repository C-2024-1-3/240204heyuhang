#include <iostream>
using namespace std;
int 加法(int a, int b)
{
    return a + b;
}
int 减法(int a, int b)
{
    return a - b;
}
int 乘法(int a, int b)
{
    return a * b;
}
int 除法(int a, int b)
{
    if (b == 0)
    {
        cout << "除数不能为0" << endl;
    }
    return a / b;
}
int 除余(int a, int b)
{
    if (b == 0)
    {
        cout<<"除数不能为0"<<endl;
    }
    return a % b;
}
int main()
{
    int a, b;
    char 运算符;
    cout << "请输入你想计算的式子：" << endl;
    cin >> a;
    cin >> 运算符;
    cin >> b;
    switch (运算符)
    {
    case('+'):
    {
        cout << "结果为:" << 加法(a, b) << endl;
        break;
    }
    case('-'):
    {
        cout << "结果为:" << 减法(a, b) << endl;
        break;
    }
    case('*'):
    {
        cout << "结果为:" << 乘法(a, b) << endl;
        break;
    }
    case('/'):
    {
        cout << "结果为:" << 除法(a, b) << endl;
        break;
    }
    case('%'):
    {
        cout << "结果为:" << 除余(a, b) << endl;
        break;
    }
    default:
    {
        cout << "输入的运算符不正确" << endl;
    }
    }
    return 0;
}