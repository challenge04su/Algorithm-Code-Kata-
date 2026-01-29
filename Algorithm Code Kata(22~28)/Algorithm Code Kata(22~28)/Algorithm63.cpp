#include <string>
#include <algorithm>

using namespace std;

string solution(string X, string Y)
{
    sort(X.begin(), X.end(), greater<char>());
    sort(Y.begin(), Y.end(), greater<char>());

    int i = 0;
    int j = 0;
    string answer = "";

    while (i < X.size() && j < Y.size())
    {
        if (X[i] == Y[j])
        {
            answer.push_back(X[i]);
            i++;
            j++;
        }
        else if (X[i] > Y[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    if (answer.empty())
    {
        return "-1";
    }
    if (answer[0] == '0')
    {
        return "0";
    }

    return answer;
}