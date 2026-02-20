#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    bool startWord = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            startWord = true;
        }
        else
        {
            if (startWord)
            {
                s[i] = toupper(s[i]);
                startWord = false;
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
    }
    return s;
}