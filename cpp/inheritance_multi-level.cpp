#include <iostream>
using namespace std;

class grandfather
{
public:
    int quality1()
    {
        cout << "i have short nose " << endl;
    }
};
class Parent : public grandfather
{
public:
    int quality2()
    {
        quality1();
        cout << "i have long nose " << endl;
    }
};
class child : public Parent
{
public:
    int qualityc()
    {
        quality2();
        cout << "i have short nose " << endl;
    }
};

int main()
{
    child c1;
    c1.qualityc();
    return 0;
}