#include <iostream>
using namespace std;

class students
{
public:
    int roll_number = 12;
    students()
    {
        cout << "constructor exected!!!"<<endl;
    }
    ~students()
    {
        cout << "destructor executed!!!";
    }
};
int main()
{
    students s1;

    return 0;
}