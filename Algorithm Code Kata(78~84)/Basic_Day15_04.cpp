#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int sum = 0;
    int mul = 1;
    int count = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        count++;
        mul *= num_list[i];
        sum += num_list[i];
    }

    if (count >= 11)
    {
        return sum;
    }
    else
    {
        return mul;
    }

}