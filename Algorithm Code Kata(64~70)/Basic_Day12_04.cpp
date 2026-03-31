#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int start = -1;
    int last = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 2)
        {
            start = i;
            break;
        }
    }

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] == 2)
        {
            last = i;
            break;
        }
    }

    if (start == -1)
    {
        return { -1 };
    }

    return vector<int>(arr.begin() + start, arr.begin() + last + 1);
}