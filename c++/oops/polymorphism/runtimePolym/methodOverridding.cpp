#include <iostream>
using namespace std;

class Animal
{

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class dog : public Animal
{
public:
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main()
{
    dog obj;
    obj.speak();
}

// abb jo next h vo h abstraction usko hm lecture me notes k lin kdiye hai vha se direct pdh le ya fir g4g se pdhlenge