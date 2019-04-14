#include <iostream>

using namespace std;

bool IsPerfect(int number);

int main()
{
    cout << "This programm checks if numbers are Perfect" << endl;
    for (int i = 1; i < 9999; i++)
    {
        if (IsPerfect(i))
            cout << i << endl;
    }
    return 0;
}


bool IsPerfect(int number)
{
    int n = number;
    int total = 0;
    for (int i = 1; i <= number/2; i++)
    {
        if (n % i == 0)
            total += i;
    }
    if (total == number)
        return true;
    else
        return false;
}