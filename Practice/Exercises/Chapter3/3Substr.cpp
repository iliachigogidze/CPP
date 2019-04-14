#include <iostream>
#include <string>
using namespace std;

string substr(string str, int pos, int n = -1);

int main()
{
    cout << "Substring: " << substr("chigogidze", 2) << endl;
    return 0;
}

string substr(string str, int pos, int n)
{
    string result = "";
    int upper;
    if (n==-1)
        upper = str.length();
    else
        upper = n;

    for (int i = pos; i < upper; i++)
    {
        result += str[i];
    }
    return result;
}
