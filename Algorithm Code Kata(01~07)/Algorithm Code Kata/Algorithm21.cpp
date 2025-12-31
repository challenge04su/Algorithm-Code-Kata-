#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
    bool answer = true;
    int input = x;
    int sum = 0;
    vector<int> r;

    while (x > 0)
    {
        r.push_back(x % 10);
        x /= 10;
    }

    for (int i = 0; i < r.size(); i++)
    {
        sum += r[i];
    }

    if (input % sum == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    return answer;
}