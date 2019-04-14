#include <iostream>
using namespace std;

string removeCharacter(string word, string remove);

int main()
{
    cout << removeCharacter("Ilia chigogidzea", "la");
    return 0;
}

string removeCharacter(string word, string remove)
{
    string newWord = word;
    for (int i = 0; i < newWord.length(); i++)
    {
        for (int j = 0; j < remove.length(); j++)
        {
            if (newWord[i] == remove[j])
                newWord.erase(i,1);
        }
    }
    return newWord;
}


