#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient)
{
    int answer = 0;
    vector<int> burger;

    for (int i : ingredient)
    {
        burger.push_back(i);

        if (burger.size() >= 4)
        {
            int n = burger.size();

            if (burger[n - 4] == 1 && burger[n - 3] == 2 && burger[n - 2] == 3 && burger[n - 1] == 1)
            {
                answer++;
                burger.pop_back();
                burger.pop_back();
                burger.pop_back();
                burger.pop_back();
            }
        }
    }
    return answer;
}