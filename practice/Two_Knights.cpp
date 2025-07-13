#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    for (ll i = 1; i < n + 1; i++)
    {
        ll totalSites = ((i * i) * ((i * i) - 1)) / 2;
        totalSites = totalSites - (4 * (i - 1) * (i - 2));

        cout << totalSites << endl;
    }
}