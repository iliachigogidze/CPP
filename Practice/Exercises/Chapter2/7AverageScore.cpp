#include <iostream>
using namespace std;

const int SENTINEL = -1;

double GetAverage();

int main()
{
    cout << "Programm calculates average of scores. Enter -1 to stop!" << endl;
    double average = GetAverage();
    cout << "Average score is: " << average << endl;
    return 0;
}

double GetAverage()
{
    double value;
    double average;
    int n_score = 0; 
    double total;

    while (true)
    {
        cout << "Enter score: ";
        cin >> value;
        if (value == SENTINEL)
            break;
        total += value;
        n_score++;
    }
    return total/n_score;
}