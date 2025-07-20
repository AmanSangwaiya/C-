#include <iostream>
using namespace std;

class hero
{
public:
    int health;
    char level;
    // member function to set level
    void setlevel(char ch)
    {
        level = ch;
    }
    // member function to set health
    void sethealth(int h)
    {
        health = h;
    }

    // In C++, constructors are special methods that are automatically called whenever an object of a class is created. The constructor in C++ has the same name as the class or structure.

    hero() // default constructor
    {
        cout << "Constructor called" << endl;
    }
};

int main()
{

    cout << "Hello World" << endl;
    hero ramesh; // static allocation
    cout << "hello ramesh" << endl;

    // dynamically allocation
    hero *mohan = new hero; // dynamically allocation

    // // static allocation
    // hero a;
    // a.setlevel('A');
    // a.sethealth(80);
    // cout << "level is " << a.level << endl;
    // cout << "health is " << a.health << endl;

    // // dynamically allocation(using pointers , memory , heap etc )
    // hero *b = new hero;
    // b->level = 'B';
    // b->health = 90;
    // cout << "level is " << (*b).level << endl;
    // cout << "health is " << (*b).health << endl;

    // // alternate way to access members of a class using pointer (mtlb agr dynamically allocation kiya hai to aise access karte hain)
    // cout << "level is " << b->level << endl;
    // cout << "health is " << b->health << endl;
}