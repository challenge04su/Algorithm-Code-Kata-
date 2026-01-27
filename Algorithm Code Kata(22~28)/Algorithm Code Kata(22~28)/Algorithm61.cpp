#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> answer;
    int zero = 0;
    int count = 0;

    for (int n : lottos)
    {
        if (n == 0)
        {
            zero++;
        }
        else if (find(win_nums.begin(), win_nums.end(), n) != win_nums.end())
        {
            count++;
        }
    }
    int highRank = 7 - (count + zero);
    int lowRank = 7 - count;

    if (highRank > 6)
    {
        highRank = 6;
    }
    if (lowRank > 6)
    {
        lowRank = 6;
    }

    answer.push_back(highRank);
    answer.push_back(lowRank);

    return answer;
}