#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> v;

    for (int s : score)
    {
        v.push_back(s);

        sort(v.begin(), v.end(), greater<int>());

        if (v.size() > k)
        {
            v.pop_back();
        }

        answer.push_back(v.back());
    }

    return answer;
}