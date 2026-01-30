#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int count = 0;

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] == reserve[j])
            {
                lost[i] = -1;
                reserve[j] = -1;
                break;
            }
        }
    }

    for (int i = 0; i < reserve.size(); i++)
    {
        if (reserve[i] == -1)
        {
            continue;
        }

        for (int j = 0; j < lost.size(); j++)
        {
            if (lost[j] == reserve[i] - 1 || lost[j] == reserve[i] + 1)
            {
                lost[j] = -1;
                break;
            }
        }
    }

    for (int l : lost)
    {
        if (l != -1)
        {
            count++;
        }
    }
    return n - count;
}