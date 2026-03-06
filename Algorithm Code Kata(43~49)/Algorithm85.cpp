#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements)
{
    int n = elements.size();

    vector<int> arr = elements;
    arr.insert(arr.end(), elements.begin(), elements.end());

    set<int> s;

    for (int len = 1; len <= n; len++)
    {
        for (int start = 0; start < n; start++)
        {
            int sum = 0;
            for (int k = start; k < start + len; k++)
            {
                sum += arr[k];
            }
            s.insert(sum);
        }
    }
    return s.size();
}