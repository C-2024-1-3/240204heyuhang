#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double 华氏度 ;
    cout << "请输入华氏度: ";
    cin >> 华氏度;
    double 摄氏度 = (华氏度 - 32) * 5 / 9;
    cout << "摄氏度为: " << fixed << setprecision(2) << 摄氏度 << "℃" << endl;
    return 0;
}