#include <iostream>
using namespace std;

int main()
{
    int number, hundreds, tens, ones, sum;

    cin >> number;

    hundreds = number / 100;
    tens = (number % 100) / 10;
    ones = number % 10;

    sum = hundreds + tens + ones;

    cout << 2 * sum;

    return 0;
}
