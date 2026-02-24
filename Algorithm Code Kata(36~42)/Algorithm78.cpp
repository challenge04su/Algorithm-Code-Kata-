#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    const int MOD = 1234567;
    vector<int> answer(n + 1);

    answer[0] = 0;
    answer[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        answer[i] = (answer[i - 1] + answer[i - 2]) % MOD;
    }

    return answer[n];
}