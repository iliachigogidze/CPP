#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string Capitalize(string str);

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << "Capitalized: " << Capitalize(str) << endl;
    return 0;
}

string Capitalize(string str)
{
    string newStr = str;
    newStr[0] = toupper(newStr[0]);
    for (int i = 1; i<str.length(); i++)
        newStr[i] = tolower(newStr[i]);
    return newStr;
}
