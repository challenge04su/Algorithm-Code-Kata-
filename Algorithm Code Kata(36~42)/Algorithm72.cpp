#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
    unordered_map<string, int> pos;

    for (int i = 0; i < players.size(); i++)
    {
        pos[players[i]] = i;
    }

    for (const string& name : callings)
    {
        int i = pos[name];

        if (i == 0)
        {
            continue;
        }

        string front = players[i - 1];

        swap(players[i], players[i - 1]);

        pos[name]--;
        pos[front]++;
    }

    return players;
}