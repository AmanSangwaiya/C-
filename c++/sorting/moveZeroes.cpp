#include <iostream>
#include <vector>
using namespace std;

int arrInput()
{
    int n;
    cout << "enter value of n " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter a number" << endl;
        cin >> arr[i];
    }
    return 0;
}

int moveZeroes(vector<int> &arr)
{
    int i = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}