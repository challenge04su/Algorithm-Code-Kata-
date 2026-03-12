#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    int arr1Row = arr1.size();
    int arr1Column = arr1[0].size();
    int arr2Column = arr2[0].size();

    vector<vector<int>> answer(arr1Row, vector<int>(arr2Column, 0));

    for (int i = 0; i < arr1Row; i++)
    {
        for (int j = 0; j < arr2Column; j++)
        {
            for (int k = 0; k < arr1Column; k++)
            {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    return answer;
}