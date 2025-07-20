#include <iostream>
using namespace std;

class animal
{
public:
    int age;
    int weigth;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public animal
{
};

int main()
{

    Dog d;
    d.speak();

    return 0;
}