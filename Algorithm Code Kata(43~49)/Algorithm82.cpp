#include <string>
#include <vector>

using namespace std;

long long solution(int n)
{
    long long answer = 0;
    const int MOD = 1234567;

    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }

    long long one = 1;
    long long two = 2;

    for (int i = 3; i <= n; i++)
    {
        answer = (one + two) % MOD;
        one = two;
        two = answer;
    }
    return answer;
}