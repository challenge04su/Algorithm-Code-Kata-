#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    vector<string> numbers = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    for (int i = 0; i < numbers.size(); i++)
    {
        while (s.find(numbers[i]) != string::npos)
        {
            s.replace(s.find(numbers[i]), numbers[i].length(), to_string(i));
        }
    }
    answer = stoi(s);
    return answer;
}