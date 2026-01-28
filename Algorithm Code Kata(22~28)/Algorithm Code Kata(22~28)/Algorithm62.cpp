#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;
    vector<string> word = { "aya", "ye", "woo", "ma" };

    for (string s : babbling)
    {
        int i = 0;
        string prev = "";
        bool valid = true;

        while (i < s.size())
        {
            bool match = false;

            for (string w : word)
            {
                if (s.substr(i, w.size()) == w && w != prev)
                {
                    match = true;
                    prev = w;
                    i += w.size();
                    break;
                }
            }
            if (!match)
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            answer++;
        }
    }
    return answer;
}