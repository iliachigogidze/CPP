#include <iostream>
using namespace std;


string RemoveOccurances(char c, string s)
{
    string result;
    for (int i = 0; i < s.length(); i++)
        if (s[i] != c) result += s[i];
    return result;
}

int main()
{
    string s;
    char c;
    cout << "Enter word to remove char from" << endl;
    cin >> s;
    cout << "Enter char to remove from " << s << endl;
    cin >> c;
    cout << RemoveOccurances(c, s) << endl; 
    return 0;
}