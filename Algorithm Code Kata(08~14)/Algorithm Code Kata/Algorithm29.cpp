#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer = arr;

    if (arr.size() == 1)
    {
        return{ -1 };
    }

    auto it = min_element(answer.begin(), answer.end());
    answer.erase(it);

    return answer;
}