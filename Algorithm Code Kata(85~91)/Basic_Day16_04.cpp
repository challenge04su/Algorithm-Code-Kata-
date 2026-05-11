#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{

    for (char& c : myString)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += 32;
        }

        if (c == 'a')
        {
            c = 'A';
        }
    }

    return myString;
}