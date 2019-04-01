//#include "genlib.h"

#include <iostream>
using namespace std;

double GetAverageScore(int sentinel = -1);

int main()
{
    cout << "Welcome" << endl;
    double average = GetAverageScore();
    cout << "Average is " << average << endl;
    return 0;
}

double GetAverageScore(int sentinel)
{
    int sum = 0;
    int value;
    int numScore = 0;

    while (true)
    {
        cout << "Enter number: " << endl;
        cin >> value;
        if (value == sentinel) break;
        sum += value;
        numScore ++;
    }
    return double(sum)/numScore;
}


