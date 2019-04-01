#include <iostream>
using namespace std;

const int SENTINEL = -1;

double GetLargestNumber();

int main()
{
    cout << "Displays the largest input number. Press " << SENTINEL << " to stop!" << endl;
    cout << "The largest number was: " << GetLargestNumber();

    return 0;
}

double GetLargestNumber()
{
    double value;
    double largest;
    int num_inputs = 0;
    while (true)
    {
        cout << "Enter value: ";
        cin >> value;
        if (value == SENTINEL)
            return largest;
        if (++num_inputs == 1)
            largest = value;
        else if (value > largest)
            largest = value;
    }
    return largest;
}