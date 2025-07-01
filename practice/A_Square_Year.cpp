#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int year = stoi(s);
        bool found = false;

        // Try all 3 valid split positions (i = 1, 2, 3)
        for (int i = 1; i <= 3; ++i)
        {
            string part1 = s.substr(0, i);
            string part2 = s.substr(i);

            // Convert parts to integers
            int a = stoi(part1);
            int b = stoi(part2);
            int sum = a + b;

            if (sum * sum == year)
            {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
