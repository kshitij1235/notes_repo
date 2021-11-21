#include <iostream>
using namespace std;

class parent1
{
public:
    int quality1()
    {
        cout << "i have tall nose" << endl;
    }
};

class parent2
{
public:
    int quality2()
    {
        cout << "i have short nose" << endl;
    }
};

class child : public parent1, public parent2
{
public:
    int qualityc()
    {
        quality1();
        quality2();
        cout << "i have tall nose" << endl;
    }
};

int main()
{
    child c1;
    c1.qualityc();
    return 0;
}