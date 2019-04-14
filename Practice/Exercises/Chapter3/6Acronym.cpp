#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string Acronym(string word);

int main()
{
    cout << "Enter the word: ";
    string word;
    getline(cin, word);
    cout << "Acronym: " << Acronym(word) << endl;
    return 0;
}

string Acronym(string word)
{
    string result = "";
    if (isalpha(word[0]))
        result += toupper(word[0]);
    for (int i = 1; i < word.length(); i++)
    {
        if ((isspace(word[i]) || ispunct(word[i])) && i+1 < word.length())
            result += toupper(word[i+1]);
    }
    return result;
}