#include <iostream>
using namespace std;

class roll_no
{
public:
    int roll=10;
    void display(roll_no x)
    {
        cout << "your roll no is : " << x.roll;
    }
};

int main()
{

    roll_no s1;
    s1.display(s1);
    return 0;
}