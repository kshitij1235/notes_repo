#include <iostream>
using namespace std;

class students
{

public:
    students()
    {
        cout << "default constructor called " << endl;
    }
    students(int roll_no)
    {
        cout << "this is a  parameterise constructor and the value it contain is : " << roll_no << endl;
    }
};
int main()
{
    students s1(5);
    students s2;

    return 0;
}