#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices)
{
    string answer = "";
    map<char, int> score;

    for (int i = 0; i < survey.size(); i++)
    {
        char first = survey[i][0];
        char second = survey[i][1];
        int choice = choices[i];

        if (choice < 4)
        {
            score[first] += 4 - choice;
        }
        else if (choice > 4)
        {
            score[second] += choice - 4;
        }
    }

    answer += (score['R'] >= score['T']) ? 'R' : 'T';
    answer += (score['C'] >= score['F']) ? 'C' : 'F';
    answer += (score['J'] >= score['M']) ? 'J' : 'M';
    answer += (score['A'] >= score['N']) ? 'A' : 'N';

    return answer;
}