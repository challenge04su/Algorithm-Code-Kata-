#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int k)
{
    vector<int> answer;
    int num = 1;

    while (1)
    {
        int a = k * num;

        if (a > n)
        {
            break;
        }
        else
        {
            answer.push_back(a);
            num++;
        }


    }
    return answer;
}