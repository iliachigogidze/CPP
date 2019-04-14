#include <iostream>
using namespace std;

const int SENTINEL = -1;

int ReverseInt(int value);

int main()
{
    cout << "Programm returns reverse integer. Press -1 to stop!" << endl;
    int value;
    while(true)
    {
        cout << "Enter value: ";
        cin >> value;
        if (value == SENTINEL)
            break;
        int reversed_string = ReverseInt(value);
        cout << "Reversed: " << reversed_string << endl;
    }
    return 0;
}

int ReverseInt(int number)
{
    int dec = 0;
    int result;
    while (number > 0)
    {   
        result = result * 10 + (number % 10);
        number /= 10;
        cout << "result: " << result << "   number: " << number << endl;
        dec++;
    }
    return result;
}

