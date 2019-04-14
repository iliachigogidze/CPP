#include <iostream>
using namespace std;

void Hailstone(int number);

int main()
{
    cout << "Enter number: ";
    int number;
    cin >> number;
    Hailstone(number);
    return 0;
}

void Hailstone(int number)
{
    while (number != 1)
    {
        if (number % 2 == 0)
        {
            number /= 2;
            cout << number << endl;
        }
        else if (number % 2 == 1)
        {
            number = number * 3 + 1;
            cout << number << endl;
        }
        // else break;
    }
}