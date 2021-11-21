#include <iostream>
using namespace std;
class student
{
public:
    static void print()
    {
        cout << "try printing this stat member funtion";
    }
};
int main()
{
    student::print();
    return 0;
}