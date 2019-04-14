#include <iostream>
#include <string>
using namespace std;


bool endsWith(string str, string suffix);

int main()
{
    // string str;
    // string suffix;
    // cout << "Enter str: " << endl;
    // cin >> str;
    // cout << "Enter suff: " << endl;
    // cin >> suffix;
    string str = "ILIA";
    cout << "STRIIIIING: " << str[-1];
   
    if (endsWith("ilia", 'a'))
        cout << "Yes";
    else
    {
        cout << "No";
    }

    if (endsWith("ilia", 'i'))
        cout << "Yes";
    else
    {
        cout << "No";
    }
    
    if (endsWith("ilia", "ia"))
        cout << "Yes";
    else
    {
        cout << "No";
    }

    if (endsWith("ilia", "a"))
        cout << "Yes";
    else
    {
        cout << "No";
    }

    if (endsWith("ilia", "i"))
        cout << "Yes";
    else
    {
        cout << "No";
    }


    return 0;
}

bool endsWith(string str, string suffix)
{
    int SuffixLength = suffix.length();
    int StrLength = str.length();

    string Substr = str.substr(StrLength-SuffixLength);
    if (Substr == suffix)
        return true;
    else
        return false;
    
}

bool endsWith(string str, char suffix)
{
    if (str[str.length()-1] == suffix)
        return true;
    else
        return false;
}