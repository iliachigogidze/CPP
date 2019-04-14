#include <iostream>
#include <string>
using namespace std;

int GiveScore(string c);

int main()
{
    cout << "Enter the word: ";
    string word;
    cin >> word;
    cout << GiveScore(word) << endl;
    return 0;
}


int GiveScore(string word)
{
    int TotalScore = 0;
    for (int i = 0; i < word.length(); i++)
    {
        switch (word[i])
        {
        case 'A':case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
            TotalScore +=1;
            break;
        case 'D':case 'G':
            TotalScore += 2;
            break;
        case 'B':case 'C': case 'M': case 'P':
            TotalScore += 3;
            break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            TotalScore += 4;
            break;
        case 'K':
            TotalScore += 5;
            break;
        case 'J': case 'X':
            TotalScore += 8;
            break;
        case 'Q': case 'Z': 
            TotalScore += 10;
            break;
        default:
            break;
        }
    }
    return TotalScore;
}