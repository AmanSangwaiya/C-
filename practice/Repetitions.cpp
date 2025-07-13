#include <iostream>
#include <string>
using namespace std;

int repetingString(string s)
{

    if (s.empty())
        return 0;

    int maxLen = 1, currLen = 1;

    for (size_t i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            currLen++;
            if (currLen > maxLen)
                maxLen = currLen;
        }
        else
        {
            currLen = 1;
        }
    }

    return maxLen;
}

int main()
{
    string s;
    cin >> s;
    cout << repetingString(s) << endl;
    return 0;
}