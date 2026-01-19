#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    int c1 = 0;
    int c2 = 0;

    for (string word : goal)
    {
        if (c1 < cards1.size() && cards1[c1] == word)
        {
            c1++;
        }
        else if (c2 < cards2.size() && cards2[c2] == word)
        {
            c2++;
        }
        else
        {
            return "No";
        }
    }
    return "Yes";
}