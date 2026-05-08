#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> strArr)
{
    vector<string> answer;

    for (int i = 0; i < strArr.size(); i++)
    {
        string s = strArr[i];

        if (i % 2 == 1)
        {
            for (char& c : s)
            {
                c = toupper(c);
            }
        }
        else
        {
            for (char& c : s)
            {
                c = tolower(c);
            }
        }

        answer.push_back(s);
    }

    return answer;
}