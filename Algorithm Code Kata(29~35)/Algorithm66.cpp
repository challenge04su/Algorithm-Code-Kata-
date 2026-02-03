#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets)
{
    vector<int> answer;
    unordered_map<char, int> minPress;

    for (const string& key : keymap)
    {
        for (int i = 0; i < key.size(); i++)
        {
            char c = key[i];
            int press = i + 1;

            if (!minPress.count(c) || minPress[c] > press)
            {
                minPress[c] = press;
            }
        }
    }

    for (const string& target : targets)
    {
        int sum = 0;
        bool possible = true;

        for (char c : target)
        {
            if (!minPress.count(c))
            {
                possible = false;
                break;
            }
            sum += minPress[c];
        }

        answer.push_back(possible ? sum : -1);
    }
    return answer;
}