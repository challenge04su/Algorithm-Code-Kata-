#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for (auto& q : commands)
    {
        vector<int> num;

        int i = q[0];
        int j = q[1];
        int k = q[2];

        for (int n = i - 1; n < j; n++)
        {
            num.push_back(array[n]);
        }
        sort(num.begin(), num.end());
        answer.push_back(num[k - 1]);
    }
    return answer;
}