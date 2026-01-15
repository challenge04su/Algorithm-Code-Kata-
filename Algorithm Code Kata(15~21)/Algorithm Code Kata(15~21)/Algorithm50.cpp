#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    unordered_map<char, int> lastIndex;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (lastIndex.find(ch) != lastIndex.end())
        {
            answer.push_back(i - lastIndex[ch]);
        }
        else
        {
            answer.push_back(-1);
        }
        lastIndex[ch] = i;
    }
    return answer;
}