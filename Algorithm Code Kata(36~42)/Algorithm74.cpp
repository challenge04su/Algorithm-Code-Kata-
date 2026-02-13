#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
    vector<int> answer(id_list.size(), 0);

    set<string> unique_report(report.begin(), report.end());

    map<string, int> reported_count;

    map<string, vector<string>> report_list;

    for (auto& r : unique_report)
    {
        int space = r.find(' ');
        string from = r.substr(0, space);
        string to = r.substr(space + 1);

        report_list[from].push_back(to);
        reported_count[to]++;
    }

    set<string> banned;
    for (auto& p : reported_count)
    {
        if (p.second >= k)
        {
            banned.insert(p.first);
        }
    }

    for (int i = 0; i < id_list.size(); i++)
    {
        string user = id_list[i];

        for (auto& reported_user : report_list[user])
        {
            if (banned.count(reported_user))
            {
                answer[i]++;
            }
        }
    }

    return answer;
}