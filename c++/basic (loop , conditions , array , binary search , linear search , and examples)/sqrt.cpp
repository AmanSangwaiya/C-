#include<iostream>
using namespace std;

int binarySearch(int n){
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
    int ans;
    while (s<=e)
    {
        int square = mid*mid;
        if (square==n)
        {
            return mid;
        }
        if (square < n )
        {
            ans= mid;
            s= mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sqrt = binarySearch(n);
    cout << "Square root of " << n << " is " << sqrt << endl;
    return 0;
}