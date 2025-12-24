#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    if (num1 > 0 && num1 <= 100 && num2 > 0 && num2 <= 100)
    {
        float answer = ((float)num1 / num2) * 1000;
        return answer;
    }
}

int main()
{
    solution(3, 2);
    solution(7, 3);
    solution(1, 16);
}