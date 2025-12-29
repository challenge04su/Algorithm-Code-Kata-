#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    if (num1 >= 0 && num1 <= 100 && num2 >= 0 && num2 <= 100)
    {
        int answer = num1 * num2;
        return answer;
    }
}

int main()
{
    solution(3, 4);
    solution(27, 19);
}