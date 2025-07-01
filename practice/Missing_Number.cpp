#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int totalSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        actualSum = actualSum + arr[i];
    }

    int missingNumber = totalSum - actualSum;
    cout << missingNumber;
}
