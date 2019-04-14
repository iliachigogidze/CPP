#include <iostream>
#include <cmath>
using namespace std;

bool CheckIfPrime(int number);

int main()
{
    cout << "This programm check for Prime numbers." << endl;
    for (int i = 2; i < 999; i++)
    {
        if (CheckIfPrime(i))
            cout << i << " is prime." << endl;
    }
    return 0;
}

bool CheckIfPrime(int number)
{
    double upper = sqrt(number);
    for (int i = 2; i <= upper; i++)
    {
        if (number % i == 0) return false;
    }
    return true;
}