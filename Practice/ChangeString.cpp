#include <iostream>

using namespace std;

int main()
{
    string s;
    cout << "Enter string: "<< endl;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        s[i] = toupper(s[i]);
    cout << "New string is: " << s << endl;
    //C++ string is mutable!!!!!!!!!!!!!Q
}