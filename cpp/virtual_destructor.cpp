#include <iostream>

using namespace std;

class Base
{
public:
    ~Base()
    {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Derived Destructor\n";
    }
};

int main()
{
    Base *b = new Derived; // Upcasting
    delete b;
}