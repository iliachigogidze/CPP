#include <iostream>
#include <string>
using namespace std;

string removeDoubledLetters(string str);

int main()
{
    cout << "Enter string: ";
    string str;
    cin >> str;
    cout << "New String: " << removeDoubledLetters(str);
    return 0;
}

string removeDoubledLetters(string str)
{
    string newString = "";
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] != str[i-1])
            newString += str[i-1]; 
    }
    newString += str[str.length()-1];
    return newString;
}