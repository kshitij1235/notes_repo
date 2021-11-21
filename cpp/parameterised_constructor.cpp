#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    student(int x)
    {
        rollno = x;
        cout << "Constructor executed!" << endl;
    }
    void printroll()
    {
        cout << "Your roll number is: " << rollno;
    }
};
int main()
{
    student S1(5);
    S1.printroll();
    return 0;
}
