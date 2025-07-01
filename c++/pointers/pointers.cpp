#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;

    // adress of operator - &

    cout << "adress of num is " << &num << endl;

    int *ptr = &num;
    cout << "value is : " << *ptr << endl;
}