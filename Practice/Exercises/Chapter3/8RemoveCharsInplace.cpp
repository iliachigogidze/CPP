#include <iostream>
#include <string>
using namespace std;

void removeCharsInplace(string &str, string remove);

int main()
{
    string str = "ilia";
    removeCharsInplace(str, "i");
    cout << "new string: " << str << endl;
    return 0;
}

void removeCharsInplace(string &str, string remove)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < remove.length(); j++)
        {
            if (str[i] == remove[j])
                str.erase(i, 1);
        }
    }
}
