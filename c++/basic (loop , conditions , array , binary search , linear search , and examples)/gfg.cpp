#include <iostream>
#include <vector>
using namespace std;
void getMin(vector<int> &arr)
{
    int i = 0 while (i < arr.size())
    {
        if (arr[i] < arr[i + 1])
        {
            /* code */
        }
    }
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int n;
    cout << "enter value of n " << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter a number" << endl;
        cin >> arr[i];
    }

    reverseArray(arr);
    cout << "the reversed array is " << endl;
    print(arr);

    return 0;
}