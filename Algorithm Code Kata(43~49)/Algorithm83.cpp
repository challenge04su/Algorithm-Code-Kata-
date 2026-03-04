#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine)
{
    int answer = 0;
    int sum = 0;
    unordered_map<int, int> countMap;
    vector<int> counts;

    for (int size : tangerine)
    {
        countMap[size]++;
    }

    for (auto& pair : countMap)
    {
        counts.push_back(pair.second);
    }

    sort(counts.begin(), counts.end(), greater<int>());

    for (int c : counts)
    {
        sum += c;
        answer++;
        if (sum >= k)
        {
            break;
        }
    }
    return answer;
}