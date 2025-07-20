// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --#include <iostream>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n; // number of test cases

//     for (int t = 0; t < n; t++)
//     {
//         int arrX[4], arrY[4];

//         for (int i = 0; i < 4; i++)
//         {
//             int x, y;
//             cin >> x >> y;

//             if (x < 0 || y < 0)
//             {
//                 // cout << "Invalid input. x and y must be non-negative." << endl;
//                 return 1; // Exit on invalid input
//             }

//             arrX[i] = x;
//             arrY[i] = y;
//         }

//         // Find maxX and minX
//         int maxX = INT_MIN;
//         int minX = INT_MAX;

//         for (int i = 0; i < 4; i++)
//         {
//             if (arrX[i] > maxX)
//                 maxX = arrX[i];
//             if (arrX[i] < minX)
//                 minX = arrX[i];
//         }

//         int side = maxX - minX;
//         int area = side * side;

//         cout << area << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // number of test cases

    for (int t = 0; t < n; t++)
    {
        int arrX[4], arrY[4];

        for (int i = 0; i < 4; i++)
        {
            int x, y;
            cin >> x >> y;

            if (x < 0 || y < 0)
            {
                // cout << "Invalid input. x and y must be non-negative." << endl;
                // return 1;
            }

            arrX[i] = x;
            arrY[i] = y;
        }

        int maxX = INT_MIN;
        int minX = INT_MAX;

        for (int i = 0; i < 4; i++)
        {
            if (arrX[i] > maxX)
                maxX = arrX[i];
            if (arrX[i] < minX)
                minX = arrX[i];
        }

        int side = maxX - minX;
        int area = side * side;

        cout << area << endl;
    }

    return 0;
}
