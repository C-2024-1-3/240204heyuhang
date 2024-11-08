#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string input;
    std::getline(std::cin, input);

    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    for (char c : input) {
        if (isalpha(c)) {
            letterCount++;
        }
        else if (isspace(c)) {
            spaceCount++;
        }
        else if (isdigit(c)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "Letters: " << letterCount << endl;
    cout << "Spaces: " << spaceCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Others: " << otherCount << endl;

    return 0;
}