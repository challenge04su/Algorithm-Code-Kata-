#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    char c = '0';
    int same = 0;
    int diff = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (same == 0 && diff == 0)
        {
            c = s[i];
            same = 1;
            continue;
        }

        if (c == s[i])
        {
            same++;
        }
        else
        {
            diff++;
        }

        if (same == diff)
        {
            answer++;
            same = 0;
            diff = 0;
        }
    }
    if (same != 0 || diff != 0)
    {
        answer++;
    }
    return answer;
}