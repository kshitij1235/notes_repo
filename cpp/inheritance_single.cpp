#include <iostream>
using namespace std;

class parent
{
public:
    int parent_var = 5;
};

class child : public parent
{
public:
    int child_var = 6;
    int display()
    {
        cout << "parent_var : " << parent_var << endl;
        cout << "child_var :  " << child_var << endl;
        return 0;
    }
};

int main()
{
    child c1;
    c1.display();
    return 0;
}