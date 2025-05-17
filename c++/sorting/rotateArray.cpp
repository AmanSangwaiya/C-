#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> temp(n);
    cout << "Enter the value of k " << endl;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    // copy temp into arr vector
    arr = temp;
}
int main()
{
    int k;
    int n;
    cout << "enter value of n " << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter a number" << endl;
        cin >> arr[i];
    }
    /// vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    /// int n = arr.size();

    rotateArray(arr, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}