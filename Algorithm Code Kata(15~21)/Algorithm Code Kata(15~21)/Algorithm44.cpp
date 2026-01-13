#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes)
{
    int answer = 0;
    int maxW = 0;
    int maxH = 0;

    for (auto& q : sizes)
    {
        int w = max(q[0], q[1]);
        int h = min(q[0], q[1]);

        maxW = max(maxW, w);
        maxH = max(maxH, h);
    }
    answer = maxW * maxH;

    return answer;
}