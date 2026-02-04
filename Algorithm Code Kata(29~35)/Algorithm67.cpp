#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index)
{
    string answer = "";

    vector<bool> isSkip(26, false);

    for (char c : skip)
    {
        isSkip[c - 'a'] = true;
    }

    for (char c : s)
    {
        int cnt = 0;
        char cur = c;

        while (cnt < index)
        {
            cur++;
            if (cur > 'z') cur = 'a';

            if (!isSkip[cur - 'a'])
            {
                cnt++;
            }
        }

        answer += cur;
    }
    return answer;
}