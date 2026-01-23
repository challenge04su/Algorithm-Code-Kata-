#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section)
{
    int answer = 0;
    int i = 0;

    while (i < section.size())
    {
        int start = section[i];
        int end = start + m - 1;
        answer++;

        while (i < section.size() && section[i] <= end)
        {
            i++;
        }
    }
    return answer;
}