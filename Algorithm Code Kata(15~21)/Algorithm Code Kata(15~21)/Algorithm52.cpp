#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    int answer = 0;

    while (n >= a)
    {
        int count = n / a;
        answer += count * b;
        n = count * b + (n % a);
    }
    return answer;
}