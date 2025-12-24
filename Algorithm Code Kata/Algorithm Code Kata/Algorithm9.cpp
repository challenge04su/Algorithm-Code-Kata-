#include <string>
#include <vector>

using namespace std;

int sum = 0;
int solution(int n) {
    if (n > 0 && n <= 1000)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                sum += i;
            }
        }
        int answer = sum;
        return answer;
    }
}


int main()
{
    solution(10);
    solution(4);
}