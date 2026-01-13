#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";

    for (char& c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c = 'A' + (c - 'A' + n) % 26;
            answer += c;
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = 'a' + (c - 'a' + n) % 26;
            answer += c;
        }
        else
        {
            answer += " ";
        }
    }
    return answer;
}