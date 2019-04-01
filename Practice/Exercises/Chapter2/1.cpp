#include <iostream>
using namespace std;

double ConvertCelsiusToFarenheit(double celsius);

int main()
{
    cout << "Converts Celsius in Farenheit" << endl;
    cout << "Enter temperature in Celsius: ";

    double celsius;
    cin >> celsius;

    cout << celsius << " Celsius in Farenheit is: " << ConvertCelsiusToFarenheit(celsius) << endl;
}

double ConvertCelsiusToFarenheit(double celsius)
{
    return ((9/5)*celsius) + 32;
}
