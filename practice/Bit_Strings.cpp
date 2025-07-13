#include <iostream>
using namespace std;
using ll = long long;
const int mod = 1000000007;

int main()
{
    ll n;
    cin >> n;

    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        ans = (ans * 2) % mod;
    }

    cout << ans << endl;
    return 0;
}
