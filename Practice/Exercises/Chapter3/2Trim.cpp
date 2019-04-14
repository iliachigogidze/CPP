#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string trim(string str);

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Trimmed string: " << trim(str) << endl;
    return 0;
}

string trim(string str)
{
    string result = "";
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        if (!isspace(str[i]))
            result += str[i];
    }
    return result;
}