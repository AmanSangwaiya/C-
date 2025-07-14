#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 1 << n; // 2^n

    for (int i = 0; i < total; i++)
    {
        int gray = i ^ (i >> 1); // Gray code
        for (int j = n - 1; j >= 0; j--)
        {
            cout << ((gray >> j) & 1); // Print each bit
        }
        cout << endl;
    }

    return 0;
}
