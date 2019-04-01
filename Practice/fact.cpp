#include <iostream>

using namespace std;

int GetFactorial(int value);
/*
This is the prototype for function GetFactorial. We can avoid writing this prototype
if we initialize function GetFactorial before main()
*/

int main()
{
    cout << "This programm prints factorial of the input number" << endl;
    cout << "Enter value: ";
    int value;
    cin >> value;

    cout << "Factorial of " << value << " is: " << GetFactorial(value) << endl;
    return 0;
}


int GetFactorial(int value)
{
    int fact = 1;
    for (int i = value; i > 0; i--)
        fact *= i;
    return fact;
}