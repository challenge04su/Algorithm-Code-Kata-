#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location)
{
    queue<pair<int, int>> q;
    priority_queue<int> pq;

    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({ priorities[i], i });
        pq.push(priorities[i]);
    }

    int answer = 0;

    while (!q.empty())
    {
        int priority = q.front().first;
        int index = q.front().second;
        q.pop();

        if (priority == pq.top())
        {
            pq.pop();
            answer++;

            if (index == location) return answer;
        }
        else
        {
            q.push({ priority, index });
        }
    }

    return answer;
}