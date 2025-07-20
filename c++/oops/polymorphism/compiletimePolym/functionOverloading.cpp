#include <iostream>
using namespace std;
// function overloading
class A
{
public:
    void sayHello()
    {
        cout << "Hello Aman This side " << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello  " << name << endl;
    }
};

int main()
{
    A obj;

    obj.sayHello();
    obj.sayHello("Aman");
}