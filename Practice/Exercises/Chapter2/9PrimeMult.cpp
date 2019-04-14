#include <iostream>
using namespace std;

void GetPrimes(int number);

int main()
{
    cout << "Prime factorization programm. Enter number: ";
    int number;
    cin >> number;
    GetPrimes(number);
    return 0;
}

void GetPrimes(int number)
{
    for (int i = 2; i <= number;)
    {
        if ((number % i) == 0)
        {
            // cout << "here2";
            cout << i << endl;
            number /= i;
        }
        else i++;
    }
}