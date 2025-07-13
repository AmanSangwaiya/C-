#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;
    int a = 2;
    cin >> x >> y;
    int arr[x][y];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> arr[i];
        }
    }

    for (int a = 0; a < t; a++)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}