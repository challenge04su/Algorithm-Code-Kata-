#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e)
{
    string answer = "";
    string reverse = "";

    for (int i = e; i >= s; i--)
    {
        reverse += my_string[i];
    }

    for (int j = 0; j < my_string.size(); j++)
    {
        if (j == s)
        {
            answer += reverse;
            j = e;
        }
        else
        {
            answer += my_string[j];
        }
    }

    return answer;
}