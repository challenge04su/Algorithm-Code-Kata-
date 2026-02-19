#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s)
{
    stringstream val(s);

    int num;

    int minVal = 99999;
    int maxVal = -99999;

    while (val >> num)
    {
        minVal = min(minVal, num);
        maxVal = max(maxVal, num);
    }

    return to_string(minVal) + " " + to_string(maxVal);
}