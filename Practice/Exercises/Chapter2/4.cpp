#include <iostream>
using namespace std;

int GetNOdds(int value);

int main()
{
    cout << "Calculates sum of N odd numbers" << endl;
    cout << "Enter number: ";
    int value;
    cin >> value;

    cout << "Answer is: " << GetNOdds(value) << endl;
}

int GetNOdds(int value)
{
    int sum;
    for (int i = 1; i <= value; i += 2)
        sum += i;
    return sum;
}