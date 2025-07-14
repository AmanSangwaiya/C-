// #include <iostream>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;
//     int a, b;

//     for (int i = 0; i < t; i++)
//     {
//         cin >> a >> b;
//         // case - 1 : when we remove 2 coins from a $ 1 from b
//         while ((a >= 2 && b >= 1) || (b >= 2 && a >= 1))

//         {
//             a = a - 2;
//             b = b - 1;
//         }

//         if ((a + b) % 3 != 0)
//         {
//             cout << "NO" << endl;
//         }

//         if (min(a, b) * 2 >= max(a, b))
//         {
//             cout << "YES" << endl;
//         }
//     }
// }
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if ((a + b) % 3 != 0 || min(a, b) * 2 < max(a, b))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
