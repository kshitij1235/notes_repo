#include <iostream>
using namespace std;
class base
{
public:
    int bas = 12;
    virtual void display()
    {
        cout << "the base class conntain : " << bas << endl;
    }
};
class derived : public base
{
public:
    int derive = 16;
    void display()
    {
        cout << "the base class conntain : " << bas << endl;
        cout << "the derived class conntain : " << derive << endl;
    }
};

int main()
{

    base *ptr;
    base obj1;
    derived obj2;
    ptr = &obj2;
    ptr->display();
    return 0;
}