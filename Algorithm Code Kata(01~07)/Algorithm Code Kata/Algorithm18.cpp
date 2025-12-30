#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int sign = 1;
    int index = 0;

    if (s[0] == '-')
    {
        sign = -1;
        index = 1;
    }
    else if (s[0] == '+')
    {
        index = 1;
    }

    for (; index < s.length(); index++)
    {
        answer = answer * 10 + (s[index] - '0');
    }
    return answer * sign;
}