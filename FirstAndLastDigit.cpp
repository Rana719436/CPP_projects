#include <iostream>
using namespace std;
int main()
{
    int number, firstDigit, lastDigit;
    cout << " Find the first and last digit of a number:" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Input any number: ";
    cin >> number;

    lastDigit = number % 10;

    firstDigit = number;
    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }
    cout << "the firstdigit of  " << number << " is " << firstDigit << endl;
    cout << "the lastdigit of  " << number << " is " << lastDigit << endl;
    return 0;
}
