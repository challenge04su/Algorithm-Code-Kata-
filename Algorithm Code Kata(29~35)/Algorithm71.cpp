#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int toDays(const string& date)
{
    int y = stoi(date.substr(0, 4));
    int m = stoi(date.substr(5, 2));
    int d = stoi(date.substr(8, 2));

    return y * 12 * 28 + m * 28 + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
    vector<int> answer;
    unordered_map<string, int> termMap;

    for (const string& t : terms)
    {
        string kind = t.substr(0, 1);
        int month = stoi(t.substr(2));
        termMap[kind] = month;
    }

    int todayDays = toDays(today);

    for (int i = 0; i < privacies.size(); i++)
    {
        string date = privacies[i].substr(0, 10);
        string kind = privacies[i].substr(11, 1);

        int collectedDays = toDays(date);
        int expireDays = collectedDays + termMap[kind] * 28;

        if (expireDays <= todayDays)
        {
            answer.push_back(i + 1);
        }
    }

    return answer;
}