#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food)
{
    string answer = "";
    string left = "";

    for (int i = 1; i < food.size(); i++)
    {
        int count = food[i] / 2;
        left.append(count, char('0' + i));
    }
    string right = string(left.rbegin(), left.rend());
    answer = left + "0" + right;
    return answer;
}