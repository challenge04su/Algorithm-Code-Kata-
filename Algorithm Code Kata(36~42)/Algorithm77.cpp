#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    int zeroCount = 0;
    int transCount = 0;

    while (s != "1")
    {
        int one = 0;

        for (char c : s)
        {
            if (c == '1')
            {
                one++;
            }
            else
            {
                zeroCount++;
            }
        }
        s = "";

        while (one > 0)
        {
            s = to_string(one % 2) + s;
            one /= 2;
        }

        transCount++;
    }

    return { transCount, zeroCount };

}