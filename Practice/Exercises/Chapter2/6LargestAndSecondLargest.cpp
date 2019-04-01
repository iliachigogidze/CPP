#include <iostream>
using namespace std;

const int SENTINEL = -1;

int main()
{
    cout << "Displays the largest and the second largest inputs. Press -1 to stop!" << endl;
    
    double largest;
    double second_largest;
    double value;

    while (true)
    {
        cout << "Enter number: ";
        cin >> value;

        if (value == SENTINEL)
        {
            cout << "Largest: " << largest << endl;
            cout << "Second Largest: " << second_largest;
            break;
        }

        if (value > largest)
        {
            second_largest = largest;
            largest = value;
        }
        else if (value > second_largest)
            second_largest = value;
    }
}

