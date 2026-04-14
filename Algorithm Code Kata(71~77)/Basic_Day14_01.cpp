#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    int num_odd = 0;
    int num_even = 0;

    for (int i = 0; i < num_list.size(); i += 2)
    {
        num_odd += num_list[i];
    }
    for (int i = 1; i < num_list.size(); i += 2)
    {
        num_even += num_list[i];
    }

    if (num_odd >= num_even)
    {
        answer = num_odd;
    }
    else
    {
        answer = num_even;
    }
    return answer;
}