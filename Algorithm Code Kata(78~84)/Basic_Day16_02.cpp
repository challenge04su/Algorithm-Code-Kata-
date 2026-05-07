#include <string>
#include <vector>

using namespace std;

bool islower(char c)
{
    return (c >= 'a' && c <= 'z');
}

char tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}

string solution(string myString)
{
    string answer = "";

    for (int i = 0; i < myString.size(); i++)
    {
        char c = myString[i];

        if (islower(c))
        {
            answer += c;
        }
        else
        {
            char lowerC = tolower(c);
            answer += lowerC;
        }

    }

    return answer;
}