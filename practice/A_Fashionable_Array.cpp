#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int even_count = 0, odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());
        if ((mn + mx) % 2 == 0)
        {
            cout << 0 << "\n"; // Already fashionable
        }
        else
        {
            // We need to remove elements to make it fashionable
            // We can either remove all odds or all evens
            cout << min(even_count, odd_count) << "\n";
        }
    }
    return 0;
}
