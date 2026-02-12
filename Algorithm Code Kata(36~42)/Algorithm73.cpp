#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes)
{
    int h = park.size();
    int w = park[0].size();

    int x = 0;
    int y = 0;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (park[i][j] == 'S')
            {
                x = i;
                y = j;

                break;
            }
        }
    }

    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };

    string dir = "NSWE";

    for (string route : routes)
    {
        char d = route[0];
        int dist = stoi(route.substr(2));

        int nx = x;
        int ny = y;
        bool canMove = true;

        int direction = dir.find(d);

        for (int i = 0; i < dist; i++)
        {
            nx += dx[direction];
            ny += dy[direction];

            if (nx < 0 || ny < 0 || nx >= h || ny >= w || park[nx][ny] == 'X')
            {
                canMove = false;
                break;
            }
        }


        if (canMove)
        {
            x = nx;
            y = ny;
        }
    }

    return { x, y };
}