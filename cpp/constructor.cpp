#include <iostream>
using namespace std;
class student
{
    public: 
    int rollno;
    student()
    {
        rollno = 1621;
        cout << "Constructor executed!"<<endl;
    }
    void printroll()
    {
        cout << "Your roll number is: " << rollno;
    }
};
int main()
{
    student S1;
    S1.printroll();
    return 0;
}
