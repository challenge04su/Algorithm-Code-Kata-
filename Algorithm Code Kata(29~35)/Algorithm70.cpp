#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(vector<string> wallpaper)
{
    int minRow = INT_MAX;
    int minCol = INT_MAX;
    int maxRow = INT_MIN;
    int maxCol = INT_MIN;

    for (int i = 0; i < wallpaper.size(); i++)
    {
        for (int j = 0; j < wallpaper[i].size(); j++)
        {
            if (wallpaper[i][j] == '#')
            {
                minRow = min(minRow, i);
                minCol = min(minCol, j);
                maxRow = max(maxRow, i);
                maxCol = max(maxCol, j);
            }
        }
    }

    return { minRow, minCol, maxRow + 1, maxCol + 1 };
}