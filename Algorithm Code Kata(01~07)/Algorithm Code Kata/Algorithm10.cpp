#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    for (int num : numbers)
    {
        sum = sum + num;
    }
    double answer = sum / numbers.size();
    return answer;
}