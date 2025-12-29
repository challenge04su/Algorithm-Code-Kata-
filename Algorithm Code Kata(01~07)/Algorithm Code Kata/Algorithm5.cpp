#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    if (num1 >= 0 && num1 <= 10000 && num2 >= 0 && num2 <= 10000)
    {
        if (num1 == num2)
        {
            return 1;
        }
        else
        {
            return -1;
        }

    }
}

int main()
{
    solution(2, 3);
    solution(11, 11);
    solution(7, 99);
}