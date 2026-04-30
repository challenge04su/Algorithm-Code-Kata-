#include <string>
#include <vector>

using namespace std;

char toupper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    return c;
}

bool isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

string solution(string myString)
{
    string answer = "";

    for (int i = 0; i < myString.size(); i++)
    {
        char c = myString[i];

        if (isupper(c))
        {
            answer += c;
        }
        else
        {
            char upperC = toupper(c);
            answer += upperC;
        }

    }
    return answer;
}